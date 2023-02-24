#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <numeric>
#pragma once
class Bangaldesh
{
public:
	map<string, vector<int>> matchesScores;
	map<string, vector<int>> matchesWickets;
	map<string, vector<int>> powerPlayScore;
	map<string, vector<int>> powerPlayWickets;
	void Bangladesh() {
		matchesScores["India"] = { 143, 156, 177 };
		matchesScores["Australia"] = { 145, 156, 134 };
		matchesScores["England"] = { 145, 154, 156 };
		matchesScores["SouthAfrica"] = { 123, 132, 189 };
		matchesScores["Newzealand"] = { 164, 141, 156 };
		matchesScores["WestIndies"] = { 156, 165, 155 };
		matchesScores["Srilanka"] = { 145, 165, 145 };

		matchesWickets["India"] = { 7, 8, 5 };
		matchesWickets["Australia"] = { 7, 8, 10 };
		matchesWickets["England"] = { 10, 7, 6 };
		matchesWickets["SouthAfrica"] = { 10, 10, 9 };
		matchesWickets["Newzealand"] = { 7, 6, 8 };
		matchesWickets["WestIndies"] = { 7, 4, 7 };
		matchesWickets["Srilanka"] = { 7, 5, 5 };

		powerPlayScore["India"] = { 45, 46, 49 };
		powerPlayScore["Australia"] = { 42, 40, 41 };
		powerPlayScore["England"] = { 42, 43, 56 };
		powerPlayScore["SouthAfrica"] = { 32, 43, 57 };
		powerPlayScore["Newzealand"] = { 54, 41, 48 };
		powerPlayScore["WestIndies"] = { 32, 65, 43 };
		powerPlayScore["Srilanka"] = { 54, 43, 45 };

		powerPlayWickets["India"] = { 2,1,2 };
		powerPlayWickets["Australia"] = { 2, 2, 3 };
		powerPlayWickets["England"] = { 2, 3, 3 };
		powerPlayWickets["SouthAfrica"] = { 3,2,1 };
		powerPlayWickets["Newzealand"] = { 2,2,1 };
		powerPlayWickets["WestIndies"] = { 1,3,1 };
		powerPlayWickets["Srilanka"] = { 3, 2, 1 };
	}

};

