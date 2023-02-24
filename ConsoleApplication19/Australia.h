#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <numeric>
class Australia
{
public:
	map<string, vector<int>> matchesScores;
	map<string, vector<int>> matchesWickets;
	map<string, vector<int>> powerPlayScore;
	map<string, vector<int>> powerPlayWickets;
	Australia() {
		matchesScores["Bangladesh"] = { 193,154, 167 };
		matchesScores["India"] = { 178, 198, 185 };
		matchesScores["England"] = { 123,187,156 };
		matchesScores["SouthAfrica"] = { 132, 136, 167 };
		matchesScores["Newzealand"] = { 189, 145, 150 };
		matchesScores["WestIndies"] = { 154, 225, 176 };
		matchesScores["Srilanka"] = { 199, 202, 187 };

		matchesWickets["Bangladesh"] = { 3, 4, 3 };
		matchesWickets["India"] = { 7, 6, 7 };
		matchesWickets["England"] = { 10, 5, 8 };
		matchesWickets["SouthAfrica"] = { 7, 8, 6 };
		matchesWickets["Newzealand"] = { 6, 9, 5 };
		matchesWickets["WestIndies"] = { 9, 6, 8 };
		matchesWickets["Srilanka"] = { 6, 7, 6 };

		powerPlayScore["Bangladesh"] = { 76, 43, 55 };
		powerPlayScore["India"] = { 54, 55, 60 };
		powerPlayScore["England"] = { 23, 45, 43 };
		powerPlayScore["SouthAfrica"] = { 39, 32,43 };
		powerPlayScore["Newzealand"] = { 56, 34, 47 };
		powerPlayScore["WestIndies"] = { 64, 71, 52 };
		powerPlayScore["Srilanka"] = { 61, 59, 56 };

		powerPlayWickets["Bangladesh"] = { 0,1,0 };
		powerPlayWickets["India"] = { 2, 1,2 };
		powerPlayWickets["England"] = { 3, 1,1 };
		powerPlayWickets["SouthAfrica"] = { 2,2,1 };
		powerPlayWickets["Newzealand"] = { 1,3,2 };
		powerPlayWickets["WestIndies"] = { 4,1,2 };
		powerPlayWickets["Srilanka"] = { 0, 0, 1 };
	}
};

