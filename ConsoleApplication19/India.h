#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <numeric>
class India
{
public:
	map<string, vector<int>> matchesScores;
	map<string, vector<int>> matchesWickets;
	map<string, vector<int>> powerPlayScore;
	map<string, vector<int>> powerPlayWickets;
	India() {
		matchesScores["Bangladesh"] = { 220,190, 176 };
		matchesScores["Australia"] = { 187, 195, 176 };
		matchesScores["England"] = { 134,165,201 };
		matchesScores["SouthAfrica"] = { 178, 147, 155 };
		matchesScores["Newzealand"] = { 184, 167, 156 };
		matchesScores["WestIndies"] = { 185, 165, 204 };
		matchesScores["Srilanka"] = { 165, 198, 156 };

		matchesWickets["Bangladesh"] = { 6, 5, 4 };
		matchesWickets["Australia"] = { 4,3, 7 };
		matchesWickets["England"] = { 9, 4, 5 };
		matchesWickets["SouthAfrica"] = { 7, 9, 4 };
		matchesWickets["Newzealand"] = { 6, 5, 5 };
		matchesWickets["WestIndies"] = { 4, 6, 5 };
		matchesWickets["Srilanka"] = { 3, 2, 5 };

		powerPlayScore["Bangladesh"] = { 60, 55, 65 };
		powerPlayScore["Australia"] = { 55, 56, 43 };
		powerPlayScore["England"] = { 23, 55, 60 };
		powerPlayScore["SouthAfrica"] = { 40, 30,42 };
		powerPlayScore["Newzealand"] = { 54, 41, 48 };
		powerPlayScore["WestIndies"] = { 45, 40, 67 };
		powerPlayScore["Srilanka"] = { 45, 61, 40 };

		powerPlayWickets["Bangladesh"] = { 0,1,2 };
		powerPlayWickets["Australia"] = { 1, 1,2 };
		powerPlayWickets["England"] = { 3, 0,0 };
		powerPlayWickets["SouthAfrica"] = { 0,3,2 };
		powerPlayWickets["Newzealand"] = { 1,2,1 };
		powerPlayWickets["WestIndies"] = { 1,2,1 };
		powerPlayWickets["Srilanka"] = { 2, 1, 0 };

	}
};

