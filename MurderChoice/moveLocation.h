#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "OutputLogging.h"
#include "playerFunc.h"
//#include "gameFunc.h"
//#include "gameSeq.h"

void moveLocation(player player);

void gameSequ(player player) {

    outputLog("gameLogs", "gameLog", "Started Second Game Sequence. ", "DEBUG");
    string inRoom = "";

    if (computer1.location == player.location) {
        inRoom = inRoom + computer1.pColor + ",";
    }
    if (computer2.location == player.location) {
        inRoom = inRoom + computer2.pColor + ",";
    }
    if (computer3.location == player.location) {
        inRoom = inRoom + computer3.pColor + ",";
    }
    if (computer4.location == player.location) {
        inRoom = inRoom + computer4.pColor + ",";
    }

    string taskList = "";
    if (player.location == "Hallway") {
        taskList = hallway[0] + ", " + hallway[1] + ", " + hallway[2] + ", " + hallway[3];
    }

    if (player.location == "Lunchroom") {
        taskList = lunchroom[0] + ", " + lunchroom[1] + ", " + lunchroom[2] + ", " + lunchroom[3];
    }

    if (player.location == "Office") {
        taskList = office[0] + ", " + office[1] + ", " + office[2] + ", " + office[3];
    }

    if (player.location == "Basement") {
        taskList = basement[0] + ", " + basement[1] + ", " + basement[2] + ", " + basement[3];
    }

    if (player.location == "Office2") {
        taskList = office2[0] + ", " + office2[1] + ", " + office2[2] + ", " + office2[3];
    }

    if (player.location == "Electrics") {
        taskList = electrics[0] + ", " + electrics[1] + ", " + electrics[2] + ", " + electrics[3];
    }

    if (player.location == "MeetingRoom") {
        taskList = meetingroom[0] + ", " + meetingroom[1] + ", " + meetingroom[2] + ", " + meetingroom[3];
    }

    int choice = 0;
    while (choice == 0) {
        cout << "You are in: " << player.location << endl << "Other players in this room are, " << inRoom << endl << endl << "The remaining tasks needing to be completed are: " << endl << endl << taskList << endl << endl << "What would you like to do?" << endl << endl << "[1] --> Do tasks in " + player.location << endl << "[2] --> Move Locations" << endl << "[3] --> Exit Game" << endl << "[4] --> Call Meeting (DEBUG)" << endl << "Your choice: ";
        cin >> choice;
        if (choice > 4) {
            choice = 0;
        }
    }

    if (choice == 1) {
        //Do Tasks function
    }

    if (choice == 2) {
        moveLocation(player);
    }

    if (choice == 3) {
        return;
    }

    if (choice == 4) {

    }
}

void moveLocation(player player) {
    int choice = 0;

    while (choice == 0) {
        if (player.location == "Hallway") {
            cout << "You are in " + player.location << "." << endl << "Where would you like to move to?" << endl << "[1] --> Lunchroom" << endl << "[2] --> Office" << endl << "[3] --> Basement" << endl << "[4] --> 2nd Office" << endl << "[5] --> Electrics" << endl << "[6] --> Meeting Room" << endl << "[7] --> Hallway" << endl << "[8] --> Exit the Game" << endl;
            cin >> choice;
        }
        if (choice > 8) {
            choice = 0;
        }
        if (choice == 1 && player.location == "Lunchroom") {
            choice = 0;
            cout << "You are already in Lunchroom! That's illegal captain." << endl;
        }
        if (choice == 2 && player.location == "Office") {
            choice = 0;
            cout << "You are already in Office! That's illegal captain." << endl;
        }
        if (choice == 3 && player.location == "Basement") {
            choice = 0;
            cout << "You are already in Basement! That's illegal captain." << endl;
        }
        if (choice == 4 && player.location == "Office2") {
            choice = 0;
            cout << "You are already in 2nd Office! That's illegal captain." << endl;
        }
        if (choice == 5 && player.location == "Electrics") {
            choice = 0;
            cout << "You are already in Electrics! That's illegal captain." << endl;
        }
        if (choice == 6 && player.location == "MeetingRoom") {
            choice = 0;
            cout << "You are already in Meeting Room! That's illegal captain." << endl;
        }
        if (choice == 7 && player.location == "Hallway") {
            choice = 0;
            cout << "You are already in Hallway! That's illegal captain." << endl;
        }
    }

    //all possible choices.
    if (choice == 1) {
        //Lunchroom
        cout << "Moved player to Lunchroom" << endl;
        player.location = "Lunchroom";
        // gameStart(mainPlayer, computer1, computer2, computer3, computer4);
        gameSequ(player);
        outputLog("gameLogs", "gameLog", "Successfully moved mainPlayer to Lunchroom", "LOG");
        player.choices++;
    }

    if (choice == 2) {
        //Office
        player.location = "Office";
        gameSequ(player);
        outputLog("gameLogs", "gameLog", "Successfully moved mainPlayer to Office", "LOG");
        player.choices++;
    }

    if (choice == 3) {
        //Basement
        player.location = "Basement";
        gameSequ(player);
        outputLog("gameLogs", "gameLog", "Successfully moved mainPlayer to Basement", "LOG");
        player.choices++;
    }

    if (choice == 4) {
        //2nd Office
        player.location = "Office2";
        gameSequ(player);
        outputLog("gameLogs", "gameLog", "Successfully moved mainPlayer to 2nd Office", "LOG");
        player.choices++;
    }

    if (choice == 5) {
        //Electrics
        player.location = "Electrics";
        gameSequ(player);
        outputLog("gameLogs", "gameLog", "Successfully moved mainPlayer to Electrics", "LOG");
        player.choices++;
    }

    if (choice == 6) {
        //Meeting Room
        player.location = "MeetingRoom";
        gameSequ(player);
        outputLog("gameLogs", "gameLog", "Successfully moved mainPlayer to Meeting Room", "LOG");
        player.choices++;
    }

    if (choice == 7) {
        //Hallway
        player.location = "Hallway";
        gameSequ(player);
        outputLog("gameLogs", "gameLog", "Successfully moved mainPlayer to Hallway", "LOG");
        player.choices++;
    }

    if (choice == 8) {
        //exit game
        player.choices++;
    }
}