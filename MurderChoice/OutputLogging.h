#pragma once

/*
SystemLogging.cpp : This file contains the 'main' function.Program execution begins and ends there.
===================================================
|                Output Logging                   |
|                     By                          |
|             Matthew Macbeth / Sm982             |
|            https://github.com/sm982             |
===================================================
*/
//This program was taken from one of my programs already made on github, https://github.com/Sm982/SystemLogging

#include <iostream>
#include <fstream> 
#include <string> 
#include <ctime>
#include "dateTensor.h" // Includes variables for the todayTotalDate variable used for the document name.

using namespace std;
fstream myfile;

/*
The function should input a string for directory, this should create/place the file in the directory that is said or chosen.
Then it should input a string for fileName, this is self explanatory.
The final string is the string that you want to input as the log and what to input into the file.
If the file already exists, the function will go into the file and input the log1 string into the file underneath all of the content.
*/

//The directory string should be what directory to put the file in
//fileName is the filename and the fulldate included.
//log1 is the text that the is inputted into the file.
void outputLog(string directory, string fileName, string log1, string dOL)
{
    //Program Variables.
    int exit;
    string line;
    fstream myfile;

    //Program execution
    myfile.open(directory + "/" + fileName + fullDate + ".txt", fstream::in | fstream::app);
    myfile.seekg(0, ios::end);

    myfile << '\n';
    myfile << dOL << " | " << fullTime << " | " << log1; // logs the string, this program is useful if you have a program and want to log user related stuff, just assign the string some value you want and it'll input it into the file.
    myfile << '\n';

    myfile.clear();
    myfile.seekg(0);

    return;
}
