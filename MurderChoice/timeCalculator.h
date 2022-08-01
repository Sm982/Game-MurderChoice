#pragma once

#include <iostream>
#include <string>


using namespace std;
string calculateRuntime(int sec) {
    // calculating milliseconds to seconds
    double mil = sec / 1000;
    double min = mil / 60; // sec = 149. 149 / 60 = 2.48
    //Minutes (Only need to turn this from a double[holds decimals] to an integer in order to get a whole number)
    int mMin = min; // 2
    //Previous calculation to get total seconds
    double pSec = min - mMin; // 2.48 - 2 = 0.48
    double rSec = pSec * 60; // 0.48 * 60 = 28.8
    int rrSec = rSec; // = 28
    //Milliseconds calculation *Ignore*
    double rMil = rSec - rrSec;
    double rMill = rMil * 1000;
    int rrMil = rMill;

    string timePlayed = "00:" + to_string(mMin) + ":" + to_string(rrSec);
    return timePlayed;
    // cout << "Elapsed time in minutes and seconds and milliseconds 00:" << to_string(mMin) << ":" << to_string(rrSec) << endl; // - can add in so that milliseconds can be added. to_string(rrMil) << endl;
}