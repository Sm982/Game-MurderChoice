/*
===================================================
|             Murder Choice Game                  |
|                     By                          |
|             Matthew Macbeth Year 12             |
|       SDD Yr 12 HSC - Willyama High School      |
===================================================
*/
#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
//#include <unistd.h>

//Own Libaries
#include "timeCalculator.h"
#include "OutputLogging.h"
#include "dateTensor.h"
#include "moveLocation.h"
#include "playerFunc.h"
#include "gameFunc.h"

using namespace std;

bool isGameStarted = false;
bool isProgramRunning = true;

int welcomeMenu() {
    int choice = 0; // Default choice is zero and should remain that until user input.

    //Begin loop whilst the user choice is zero it'll keep running until an appropriate number is chosen.
    while (choice == 0) {
        cout << "Welcome to Murder Choice Game! What would you like to do?" << endl << "[1] --> Play Game" << endl << "[2] --> About Game" << endl << "[3] --> Exit Game" << endl << "Your choice : ";
        cin >> choice;
        //If choice is greater than maximum choices allowed then the loop will continue again.
        if (choice > 3) {
            choice = 0;
        }
    }


    // All choice outcomes.
    if (choice == 3) {
        cout << "Thank you for playing! Goodbye for now!" << endl;
        mainPlayer.choices++;
    }

    if (choice == 1) {
        //start game sequence
        gameStart(mainPlayer, computer1, computer2, computer3, computer4);
        mainPlayer.choices++;
    }

    if (choice == 2) {
        std::cout << std::endl << std::endl << "About Murder Choice Game" << std::endl << "Murder Choice Game | Version: 0.011" << std::endl << std::endl << "This game is a choice based game, inspiration was taken from the choose your own adventure books. The style of the game is based of murder mystery and is all random number generated and all outcomes are random." << std::endl << std::endl << "Created by Matthew Macbeth (2022) Year 12" << std::endl << "Created as a game for entertainment and enjoyment at the sole purpose of completing the Major Project assignment apart of the Software Design & Development HSC Course." << std::endl << "This program is owned by Matthew Macbeth. This program may not be redistrubted and resold." << std::endl;
        choice = 0;
        mainPlayer.choices++;
    }
    return 0;
}

int main() {
    //Start Clock
    auto start = chrono::steady_clock::now();
    outputLog("gameLogs", "gameLog", "Running game code now successfully, should output any errors.", "LOG");
    welcomeMenu();

    //end clock
    auto end = chrono::steady_clock::now();
    //Calculate milliseconds from end and start time of program.
    int sec = chrono::duration_cast<chrono::milliseconds>(end - start).count();
    //Output in console log and file output
    string played = calculateRuntime(sec);
    endSeq(mainPlayer, played);
    outputLog("gameLogs", "gameLog", "Game has ended, Time played: " + played, "LOG");
    outputLog("gameLogs", "gameLog", "Game has successfully shutdown. Ended Application process", "LOG");
    return 0;
}