#pragma once
// dateTensor is not referenced to anything, Tensor was a word taken from a word generator.
/*
timeFile.h : This file contains the 'header' file to get the current date in short format.
===================================================
|                Output Logging					  |
|				dateTensor header			      |
|                      By                         |
|            Matthew Macbeth / Sm982			  |
|            https://github.com/sm982             |
===================================================
*/

#pragma warning(disable : 4996) // Used to disable error that is related to the localtime variable in ctime.
#include <string> 
#include <ctime>

using namespace std;

time_t now = time(0);
tm* ltm = localtime(&now);

//Time as in day, month and year.
string dayDate = to_string(ltm->tm_mday);
string monthDate = to_string(1 + ltm->tm_mon);
string yearDate = to_string(1900 + ltm->tm_year);

//Time as in minutes, seconds and hours.
string minDate = to_string(ltm->tm_min);
string hrDate = to_string(ltm->tm_hour);
string secDate = to_string(ltm->tm_sec);

//combination of variables above
string fullDate = dayDate + "-" + monthDate + "-" + yearDate;
string fullTime = hrDate + ":" + minDate + ":" + secDate;
