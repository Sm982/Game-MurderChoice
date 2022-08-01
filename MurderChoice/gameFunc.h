#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "OutputLogging.h"
#include "playerFunc.h"
#include "moveLocation.h"
#include "taskCompletion.h"

void endSeq(player player, string played) {

    cout << "Game has ended!" << endl << "Time played is: " << played << endl << endl << "Player Stats: " << endl << "Choices made: " << to_string(player.choices) << endl << "Tasks Completed: " << to_string(player.tasksCompleted) << endl << "Players Murdered: " << to_string(player.murders) << endl;
}

int gameStart(player mainPlayer, player computer1, player computer2, player computer3, player computer4) {
    string playerCR = "You are [PLAYER COLOR] and you are a/the (PLAYER ROLE)";

    if (mainPlayer.isMurderer) {
        playerCR = "You are " + mainPlayer.pColor + " and you are the murderer!";
    }
    else {
        playerCR = "You are " + mainPlayer.pColor + " and you a normal player!!";
    }

    cout << "INFO" << endl << endl << playerCR << endl << "You are in " << mainPlayer.location << ". The other players in this room are, " << computer1.pColor << ", " << computer2.pColor << ", " << computer3.pColor << ", and " << computer4.pColor << endl;

    cout << endl << "There are remaining tasks for players. Tasks remaining are: " << endl << endl <<
        "Hallway: " << hallway[0] << ", " << hallway[1] << ", " << hallway[2] << ", " << hallway[3] << endl <<
        "Lunch Room: " << lunchroom[0] << ", " << lunchroom[1] << ", " << lunchroom[2] << ", " << lunchroom[3] << endl <<
        "1st Office: " << office[0] << ", " << office[1] << ", " << office[2] << ", " << office[3] << endl <<
        "The Basement: " << basement[0] << ", " << basement[1] << ", " << basement[2] << ", " << basement[3] << endl <<
        "2nd Office: " << office2[0] << ", " << office2[1] << ", " << office2[2] << ", " << office2[3] << endl <<
        "Electrics: " << electrics[0] << ", " << electrics[1] << ", " << electrics[2] << ", " << electrics[3] << endl <<
        "Meeting Room: " << meetingroom[0] << ", " << meetingroom[1] << ", " << meetingroom[2] << ", " << meetingroom[3] << endl;

    int choice = 0;
    if (mainPlayer.isMurderer) {
        while (choice == 0) {
            cout << endl << endl << "What would you like to do?" << endl << endl << "[1] --> Pretend to do tasks in " << mainPlayer.location << endl << "[2] --> Move Locations" << endl << "[3] --> Kill Somebody" << endl << "[3] --> Exit back to Main Menu" << endl;
            cin >> choice;
            if (choice > 3) {
                choice = 0;
            }

            if (choice == 1) {
                removeTask(mainPlayer);
                mainPlayer.choices++;
            }

            if (choice == 2) {
                moveLocation(mainPlayer);
                mainPlayer.choices++;
            }

            if (choice == 3) {
                cout << "Exiting the game!" << endl;
                mainPlayer.choices++;
            }
        }
    }
    else {
        while (choice == 0) {
            cout << endl << endl << "What would you like to do?" << endl << endl << "[1] --> Do tasks in " << mainPlayer.location << endl << "[2] --> Move Locations" << endl << "[3] --> Exit back to Main Menu" << endl;
            cin >> choice;
            if (choice > 3) {
                choice = 0;
            }

            if (choice == 1) {
                //Call fake tasks
                removeTask(mainPlayer);
                mainPlayer.choices++;
            }

            if (choice == 2) {
                moveLocation(mainPlayer);
                mainPlayer.choices++;
            }

            if (choice == 3) {
                cout << "Exiting the game!" << endl;
                mainPlayer.choices++;
            }
        }
    }
    return 0;
}