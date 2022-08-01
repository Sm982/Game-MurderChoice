#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "OutputLogging.h"
#include "playerFunc.h"

void removeTask(player player) {
	cout << "Completing a random task! In " << player.location << endl;

	string taskList = "";
	if (player.location == "Hallway") {
		hallway[2] = "Task Completed!";
		taskList = hallway[0] + ", " + hallway[1] + ", " + hallway[2] + ", " + hallway[3];

	}

	if (player.location == "Lunchroom") {
		lunchroom[2] = "Task Completed!";
		taskList = lunchroom[0] + ", " + lunchroom[1] + ", " + lunchroom[2] + ", " + lunchroom[3];
	}

	if (player.location == "Office") {
		office[2] = "Task Completed!";
		taskList = office[0] + ", " + office[1] + ", " + office[2] + ", " + office[3];

	}

	if (player.location == "Basement") {
		basement[2] = "Task Completed";
		taskList = basement[0] + ", " + basement[1] + ", " + basement[2] + ", " + basement[3];

	}

	if (player.location == "Office2") {
		office2[2] = "Task Completed!";
		taskList = office2[0] + ", " + office2[1] + ", " + office2[2] + ", " + office2[3];

	}

	if (player.location == "Electrics") {
		electrics[2] = "Task Completed!";
		taskList = electrics[0] + ", " + electrics[1] + ", " + electrics[2] + ", " + electrics[3];

	}

	if (player.location == "MeetingRoom") {
		meetingroom[2] = "Task Completed!";
		taskList = meetingroom[0] + ", " + meetingroom[1] + ", " + meetingroom[2] + ", " + meetingroom[3];

	}

	cout << "You are in " << player.location << endl << "There are still tasks remaining, Tasks remaining and to be completed are " << taskList << endl << endl;
}