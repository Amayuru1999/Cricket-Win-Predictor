#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <numeric>
class Srilanka
{
public:
	map<string, vector<int>> matchesScores;
	map<string, vector<int>> matchesWickets;
	map<string, vector<int>> powerPlayScore;
	map<string, vector<int>> powerPlayWickets;
	Srilanka() {
		matchesScores["Bangladesh"] = { 156,161, 165 };
		matchesScores["India"] = { 146, 183, 137 };
		matchesScores["England"] = { 141,135,138 };
		matchesScores["SouthAfrica"] = { 155, 160, 149 };
		matchesScores["Newzealand"] = { 156, 125, 134 };
		matchesScores["WestIndies"] = { 154, 187, 176 };
		matchesScores["Australia"] = { 165, 145, 153 };

		matchesWickets["Bangladesh"] = { 6, 5, 10 };
		matchesWickets["India"] = { 4, 5, 6 };
		matchesWickets["England"] = { 8, 5, 4 };
		matchesWickets["SouthAfrica"] = { 6, 3, 5 };
		matchesWickets["Newzealand"] = { 10, 6, 4 };
		matchesWickets["WestIndies"] = { 9, 8, 5 };
		matchesWickets["Australia"] = { 7, 7, 5 };

		powerPlayScore["Bangladesh"] = { 50, 43, 47 };
		powerPlayScore["India"] = { 35, 54, 49 };
		powerPlayScore["England"] = { 29, 35, 41 };
		powerPlayScore["SouthAfrica"] = { 38, 49,55 };
		powerPlayScore["Newzealand"] = { 40, 37, 51 };
		powerPlayScore["WestIndies"] = { 61, 52, 41 };
		powerPlayScore["Australia"] = { 55, 35, 39 };

		powerPlayWickets["Bangladesh"] = { 1,1,2 };
		powerPlayWickets["India"] = { 2, 3,2 };
		powerPlayWickets["England"] = { 1, 1,3 };
		powerPlayWickets["SouthAfrica"] = { 1,2,0 };
		powerPlayWickets["Newzealand"] = { 2,3,1 };
		powerPlayWickets["WestIndies"] = { 0,1,1 };
		powerPlayWickets["Australia"] = { 2, 1, 1 };
	}

};

