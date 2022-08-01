#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct player
{
    bool isDebugEnabled = false;
    bool isMurderer = false;
    string pColor = "White"; // White should not be used for any character - but is used for default.
    string location = "Hallway"; // Hallway is used as the spawn location for users.

    //Player Statistics
    int choices = 0; // Should default back to 0 every restart, counts how many choices user makes. 
    int tasksCompleted = 0; //Tasks completed by a user
    int murders = 0; // How many murders the user has done if murderer.

};

//Calling all players even computers
player mainPlayer;
player computer1;
player computer2;
player computer3;
player computer4;


//initilize arrays
//These string arrays are used for tasks that can be completed by users. Can be changed or removed at anytime.
string hallway[4] = { "Fix this", "Fix that", "Fix thus", "Fix mwah" };
string lunchroom[4] = { "Fix this", "Fix that", "Fix thus", "Fix mwah" };
string office[4] = { "Fix this", "Fix that", "Fix thus", "Fix mwah" };
string basement[4] = { "Fix this", "Fix that", "Fix thus", "Fix mwah" };
string office2[4] = { "Fix this", "Fix that", "Fix thus", "Fix mwah" };
string electrics[4] = { "Fix this", "Fix that", "Fix thus", "Fix mwah" };
string meetingroom[4] = { "Fix this", "Fix that", "Fix thus", "Fix mwah" };