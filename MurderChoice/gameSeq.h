#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "OutputLogging.h"
#include "playerFunc.h"
#include "moveLocation.h"
#include "taskCompletion.h"


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
	while (choice == 0){
		cout << "You are in: " << player.location << endl << "Other players in this room are, " << inRoom << endl << endl << "The remaining tasks needing to be completed are: " << endl << endl << taskList << endl << endl << "What would you like to do?" << endl << endl << "[1] --> Do tasks in " + player.location << endl << "[2] --> Move Locations" << endl << "[3] --> Exit Game" << endl << "[4] --> Call Meeting (DEBUG)" << endl << "Your choice: ";
		cin >> choice;
		if (choice > 4) {
			choice = 0;
		}
	}

	if (choice == 1) {
		//Do Tasks function
		removeTask(player);
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