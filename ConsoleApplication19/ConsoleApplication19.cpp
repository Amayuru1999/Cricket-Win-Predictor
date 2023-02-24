#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <numeric>
#include"Srilanka.h";
#include"Australia.h";
#include"India.h";
#include"Bangaldesh.h";

//Implemeting this code please use only srilnaka,india,australia and bangladesh(Only these countries data has been added to this project)
//algorithm
int greatermatchesscoreSum(int sumFirstmatchesScores, int sumSecondmatchesScores) {
	int averagescore = 160;
	if (sumFirstmatchesScores > sumSecondmatchesScores) {
		averagescore = averagescore + 10;
	}
	else if (sumFirstmatchesScores < sumSecondmatchesScores) {
		averagescore = averagescore - 10;
	}
	return averagescore;
}
int greatermatchesWickets(int sumFirstmatchesWickets, int sumSecondmatchesWickets) {
	int averagescore = 160;
	if (sumFirstmatchesWickets > sumSecondmatchesWickets) {
		averagescore = averagescore - 10;
	}
	else if (sumFirstmatchesWickets < sumSecondmatchesWickets) {
		averagescore = averagescore + 10;
	}
	return averagescore;
}
int greaterpowerplayScore(int sumFirstpowerPlayScore, int sumSecondpowerPlayScore) {
	int averagescore = 160;
	if (sumFirstpowerPlayScore > sumSecondpowerPlayScore) {
		averagescore = averagescore + 15;
	}
	else if (sumFirstpowerPlayScore < sumSecondpowerPlayScore) {
		averagescore = averagescore - 15;
	}
	return averagescore;
}
int greaterpowerplayWickets(int sumFirstpowerPlayWickets, int sumSecondpowerPlayWickets) {
	int averagescore = 160;
	if (sumFirstpowerPlayWickets > sumSecondpowerPlayWickets) {
		averagescore = averagescore - 12;
	}
	else if (sumFirstpowerPlayWickets < sumSecondpowerPlayWickets) {
		averagescore = averagescore + 12;
	}
	return averagescore;
}

int main()

{

	//Interface
	cout << "                                 ----------CRICKET WIN PREDICTOR----------                                     " << endl;
	cout << endl;
	cout << endl;

	cout << "First Innings" << endl;
	cout << endl;

	cout << "First Batting Team	:";
	string country1;
	cin >> country1;
	cout << endl;

	cout << "Second Batting Team	:";
	string country2;
	cin >> country2;
	cout << endl;

	int score;
	cout << "Enter the First Innings Score:";
	cin >> score;

	Bangaldesh ban;
	India ind;
	Srilanka sl;
	Australia aus;
	
	int averagescore = 160;
	//int finalscore = (averagescore + score) / (2);


	


	if ((country1 == "India" || country1 == "india") && (country2 == "Bangladesh" || country2 == "bangladesh"))
	{
		//Predicting final score logic
		int sumFirstmatchesScores = std::accumulate(ind.matchesScores["Bangladesh"].begin(), ind.matchesScores["Bangladesh"].end(), 0);
		int sumSecondmatchesScores = std::accumulate(ban.matchesScores["India"].begin(), ban.matchesScores["India"].end(), 0);

		int sumFirstmatchesWickets = std::accumulate(ind.matchesWickets["Bangladesh"].begin(), ind.matchesWickets["Bangladesh"].end(), 0);
		int sumSecondmatchesWickets = std::accumulate(ban.matchesWickets["India"].begin(), ban.matchesWickets["India"].end(), 0);

		int sumFirstpowerPlayScore = std::accumulate(ind.powerPlayScore["Bangladesh"].begin(), ind.powerPlayScore["Bangladesh"].end(), 0);
		int sumSecondpowerPlayScore = std::accumulate(ban.powerPlayScore["India"].begin(), ban.powerPlayScore["India"].end(), 0);

		int sumFirstpowerPlayWickets = std::accumulate(ind.powerPlayWickets["Bangladesh"].begin(), ind.powerPlayWickets["Bangladesh"].end(), 0);
		int sumSecondpowerPlayWickets = std::accumulate(ban.powerPlayWickets["India"].begin(), ban.powerPlayWickets["India"].end(), 0);
		
		greatermatchesscoreSum(sumFirstmatchesScores, sumSecondmatchesScores);
		greatermatchesWickets(sumFirstmatchesWickets, sumSecondmatchesWickets);
		greaterpowerplayScore(sumFirstpowerPlayScore, sumSecondpowerPlayScore);
		greaterpowerplayWickets(sumFirstpowerPlayWickets, sumSecondpowerPlayWickets);
		int finalscore = (averagescore + score) / (2);
		cout << endl;
		cout << "Final Score by second team: " << finalscore << endl;
		//defining the winner
		cout << endl;
		
		
		if (score > finalscore) {
			
			cout << "Prediction:India will Win" << endl;
		}
		else {
			cout << "Prediction:Bangladesh will Win" << endl;
		}

	}
	else if ((country1 == "Bangladesh" || country1 == "bangladesh") && (country2 == "India" || country2 == "india")) {
		int sumFirstmatchesScores = std::accumulate(ban.matchesScores["India"].begin(), ban.matchesScores["India"].end(), 0);
		int sumSecondmatchesScores = std::accumulate(ind.matchesScores["Bangladesh"].begin(), ind.matchesScores["Bangladesh"].end(), 0);

		int sumFirstmatchesWickets = std::accumulate(ban.matchesWickets["India"].begin(), ban.matchesWickets["India"].end(), 0);
		int sumSecondmatchesWickets = std::accumulate(ind.matchesWickets["Bangladesh"].begin(), ind.matchesWickets["Bangladesh"].end(), 0);

		int sumFirstpowerPlayScore = std::accumulate(ban.powerPlayScore["India"].begin(), ban.powerPlayScore["India"].end(), 0);
		int sumSecondpowerPlayScore = std::accumulate(ind.powerPlayScore["Bangladesh"].begin(), ind.powerPlayScore["Bangladesh"].end(), 0);

		int sumFirstpowerPlayWickets = std::accumulate(ban.powerPlayWickets["India"].begin(), ban.powerPlayWickets["India"].end(), 0);
		int sumSecondpowerPlayWickets = std::accumulate(ind.powerPlayWickets["Bangladesh"].begin(), ind.powerPlayWickets["Bangladesh"].end(), 0);
		greatermatchesscoreSum(sumFirstmatchesScores, sumSecondmatchesScores);
		greatermatchesWickets(sumFirstmatchesWickets, sumSecondmatchesWickets);
		greaterpowerplayScore(sumFirstpowerPlayScore, sumSecondpowerPlayScore);
		greaterpowerplayWickets(sumFirstpowerPlayWickets, sumSecondpowerPlayWickets);
		int finalscore = (averagescore + score) / (2);
		cout << endl;
		cout << "Final Score second team : " << finalscore << endl;
		//defining the winner
		cout << endl;


		if (score > finalscore) {

			cout << "Prediction:Bangladesh will Win" << endl;
		}
		else {
			cout << "Prediction:India will Win" << endl;
		}
	}
	else if ((country1 == "Srilanka" || country1 == "srilanka") && (country2 == "Australia" || country2 == "australia")) {
		int sumFirstmatchesScores = std::accumulate(sl.matchesScores["Australia"].begin(), sl.matchesScores["Australia"].end(), 0);
		int sumSecondmatchesScores = std::accumulate(aus.matchesScores["Srilanka"].begin(), aus.matchesScores["Srilanka"].end(), 0);

		int sumFirstmatchesWickets = std::accumulate(sl.matchesWickets["Australia"].begin(), sl.matchesWickets["Australia"].end(), 0);
		int sumSecondmatchesWickets = std::accumulate(aus.matchesWickets["Srilanka"].begin(), aus.matchesWickets["Srilanka"].end(), 0);

		int sumFirstpowerPlayScore = std::accumulate(sl.powerPlayScore["Australia"].begin(), sl.powerPlayScore["Australia"].end(), 0);
		int sumSecondpowerPlayScore = std::accumulate(aus.powerPlayScore["Srilanka"].begin(), aus.powerPlayScore["Srilanka"].end(), 0);

		int sumFirstpowerPlayWickets = std::accumulate(sl.powerPlayWickets["Australia"].begin(), sl.powerPlayWickets["Australia"].end(), 0);
		int sumSecondpowerPlayWickets = std::accumulate(aus.powerPlayWickets["Srilanka"].begin(), aus.powerPlayWickets["Srilanka"].end(), 0);
		greatermatchesscoreSum(sumFirstmatchesScores, sumSecondmatchesScores);
		greatermatchesWickets(sumFirstmatchesWickets, sumSecondmatchesWickets);
		greaterpowerplayScore(sumFirstpowerPlayScore, sumSecondpowerPlayScore);
		greaterpowerplayWickets(sumFirstpowerPlayWickets, sumSecondpowerPlayWickets);
		int finalscore = (averagescore + score) / (2);
		cout << endl;
		cout << "Final Score second team : " << finalscore << endl;
		//defining the winner
		cout << endl;


		if (score > finalscore) {

			cout << "Prediction:Srilanka will Win" << endl;
		}
		else {
			cout << "Prediction:Australia will Win" << endl;
		}
	}
	else if ((country1 == "Australia" || country1 == "australia") && (country2 == "Srilanka" || country2 == "srilanka")) {
		int sumFirstmatchesScores = std::accumulate(aus.matchesScores["Srilanka"].begin(), aus.matchesScores["Srilanka"].end(), 0);
		int sumSecondmatchesScores = std::accumulate(sl.matchesScores["Australia"].begin(), sl.matchesScores["Australia"].end(), 0);

		int sumFirstmatchesWickets = std::accumulate(aus.matchesWickets["Srilanka"].begin(), aus.matchesWickets["Srilanka"].end(), 0);
		int sumSecondmatchesWickets = std::accumulate(sl.matchesWickets["Australia"].begin(), sl.matchesWickets["Australia"].end(), 0);

		int sumFirstpowerPlayScore = std::accumulate(aus.powerPlayScore["Srilanka"].begin(), aus.powerPlayScore["Srilanka"].end(), 0);
		int sumSecondpowerPlayScore = std::accumulate(sl.powerPlayScore["Australia"].begin(), sl.powerPlayScore["Australia"].end(), 0);

		int sumFirstpowerPlayWickets = std::accumulate(aus.powerPlayWickets["Srilanka"].begin(), aus.powerPlayWickets["Srilanka"].end(), 0);
		int sumSecondpowerPlayWickets = std::accumulate(sl.powerPlayWickets["Australia"].begin(), sl.powerPlayWickets["Australia"].end(), 0);
		greatermatchesscoreSum(sumFirstmatchesScores, sumSecondmatchesScores);
		greatermatchesWickets(sumFirstmatchesWickets, sumSecondmatchesWickets);
		greaterpowerplayScore(sumFirstpowerPlayScore, sumSecondpowerPlayScore);
		greaterpowerplayWickets(sumFirstpowerPlayWickets, sumSecondpowerPlayWickets);
		int finalscore = (averagescore + score) / (2);
		cout << endl;
		cout << "Final Score second team : " << finalscore << endl;
		//defining the winner
		cout << endl;


		if (score > finalscore) {

			cout << "Prediction:Australia will Win" << endl;
		}
		else {
			cout << "Prediction:Srilanka will Win" << endl;
		}
		
		
	}
	
	else if ((country1 == "Australia" || country1 == "australia") && (country2 == "India" || country2 == "india")) {
		int sumFirstmatchesScores = std::accumulate(aus.matchesScores["India"].begin(), aus.matchesScores["India"].end(), 0);
		int sumSecondmatchesScores = std::accumulate(ind.matchesScores["Australia"].begin(), ind.matchesScores["Australia"].end(), 0);

		int sumFirstmatchesWickets = std::accumulate(aus.matchesWickets["India"].begin(), aus.matchesWickets["India"].end(), 0);
		int sumSecondmatchesWickets = std::accumulate(ind.matchesWickets["Australia"].begin(), ind.matchesWickets["Australia"].end(), 0);

		int sumFirstpowerPlayScore = std::accumulate(aus.powerPlayScore["India"].begin(), aus.powerPlayScore["India"].end(), 0);
		int sumSecondpowerPlayScore = std::accumulate(ind.powerPlayScore["Australia"].begin(), ind.powerPlayScore["Australia"].end(), 0);

		int sumFirstpowerPlayWickets = std::accumulate(aus.powerPlayWickets["India"].begin(), aus.powerPlayWickets["India"].end(), 0);
		int sumSecondpowerPlayWickets = std::accumulate(ind.powerPlayWickets["Australia"].begin(), ind.powerPlayWickets["Australia"].end(), 0);
		greatermatchesscoreSum(sumFirstmatchesScores, sumSecondmatchesScores);
		greatermatchesWickets(sumFirstmatchesWickets, sumSecondmatchesWickets);
		greaterpowerplayScore(sumFirstpowerPlayScore, sumSecondpowerPlayScore);
		greaterpowerplayWickets(sumFirstpowerPlayWickets, sumSecondpowerPlayWickets);
		int finalscore = (averagescore + score) / (2);
		cout << endl;
		cout << "Final Score second team : " << finalscore << endl;
		//defining the winner
		cout << endl;


		if (score > finalscore) {

			cout << "Prediction:Australia will Win" << endl;
		}
		else {
			cout << "Prediction:India will Win" << endl;
		}
	}
	else if ((country1 == "India" || country1 == "india") && (country2 == "Australia" || country2 == "australia")) {
		int sumFirstmatchesScores = std::accumulate(ind.matchesScores["Australia"].begin(), ind.matchesScores["Australia"].end(), 0);
		int sumSecondmatchesScores = std::accumulate(aus.matchesScores["India"].begin(), aus.matchesScores["India"].end(), 0);

		int sumFirstmatchesWickets = std::accumulate(ind.matchesWickets["Australia"].begin(), ind.matchesWickets["Australia"].end(), 0);
		int sumSecondmatchesWickets = std::accumulate(aus.matchesWickets["India"].begin(), aus.matchesWickets["India"].end(), 0);

		int sumFirstpowerPlayScore = std::accumulate(ind.powerPlayScore["Australia"].begin(), ind.powerPlayScore["Australia"].end(), 0);
		int sumSecondpowerPlayScore = std::accumulate(aus.powerPlayScore["India"].begin(), aus.powerPlayScore["India"].end(), 0);

		int sumFirstpowerPlayWickets = std::accumulate(ind.powerPlayWickets["Australia"].begin(), ind.powerPlayWickets["Australia"].end(), 0);
		int sumSecondpowerPlayWickets = std::accumulate(aus.powerPlayWickets["India"].begin(), aus.powerPlayWickets["India"].end(), 0);
		greatermatchesscoreSum(sumFirstmatchesScores, sumSecondmatchesScores);
		greatermatchesWickets(sumFirstmatchesWickets, sumSecondmatchesWickets);
		greaterpowerplayScore(sumFirstpowerPlayScore, sumSecondpowerPlayScore);
		greaterpowerplayWickets(sumFirstpowerPlayWickets, sumSecondpowerPlayWickets);
		int finalscore = (averagescore + score) / (2);
		cout << endl;
		cout << "Final Score second team: " << finalscore << endl;
		//defining the winner
		cout << endl;


		if (score > finalscore) {

			cout << "Prediction:India will Win" << endl;
		}
		else {
			cout << "Prediction:Australia will Win" << endl;
		}
	}
	else if ((country1 == "India" || country1 == "india") && (country2 == "Srilanka" || country2 == "srilanka")) {
	int sumFirstmatchesScores = std::accumulate(ind.matchesScores["Srilanka"].begin(), ind.matchesScores["Srilanka"].end(), 0);
	int sumSecondmatchesScores = std::accumulate(sl.matchesScores["India"].begin(), sl.matchesScores["India"].end(), 0);

	int sumFirstmatchesWickets = std::accumulate(ind.matchesWickets["Srilanka"].begin(), ind.matchesWickets["Srilanka"].end(), 0);
	int sumSecondmatchesWickets = std::accumulate(sl.matchesWickets["India"].begin(), sl.matchesWickets["India"].end(), 0);

	int sumFirstpowerPlayScore = std::accumulate(ind.powerPlayScore["Srilanka"].begin(), ind.powerPlayScore["Srilanka"].end(), 0);
	int sumSecondpowerPlayScore = std::accumulate(sl.powerPlayScore["India"].begin(), sl.powerPlayScore["India"].end(), 0);

	int sumFirstpowerPlayWickets = std::accumulate(ind.powerPlayWickets["Srilanka"].begin(), ind.powerPlayWickets["Srilanka"].end(), 0);
	int sumSecondpowerPlayWickets = std::accumulate(sl.powerPlayWickets["India"].begin(), sl.powerPlayWickets["India"].end(), 0);
	greatermatchesscoreSum(sumFirstmatchesScores, sumSecondmatchesScores);
	greatermatchesWickets(sumFirstmatchesWickets, sumSecondmatchesWickets);
	greaterpowerplayScore(sumFirstpowerPlayScore, sumSecondpowerPlayScore);
	greaterpowerplayWickets(sumFirstpowerPlayWickets, sumSecondpowerPlayWickets);
	int finalscore = (averagescore + score) / (2);
	cout << endl;
	cout << "Final Score second team: " << finalscore << endl;
	//defining the winner
	cout << endl;


	if (score > finalscore) {

		cout << "Prediction:India will Win" << endl;
	}
	else {
		cout << "Prediction:Australia will Win" << endl;
	}
	}
	else if ((country1 == "Srilanka" || country1 == "srilanka") && (country2 == "India" || country2 == "india")) {
	int sumFirstmatchesScores = std::accumulate(sl.matchesScores["India"].begin(), sl.matchesScores["India"].end(), 0);
	int sumSecondmatchesScores = std::accumulate(ind.matchesScores["Srilanka"].begin(), ind.matchesScores["Srilanka"].end(), 0);

	int sumFirstmatchesWickets = std::accumulate(sl.matchesWickets["India"].begin(), sl.matchesWickets["India"].end(), 0);
	int sumSecondmatchesWickets = std::accumulate(ind.matchesWickets["Srilanka"].begin(), ind.matchesWickets["Srilanka"].end(), 0);

	int sumFirstpowerPlayScore = std::accumulate(sl.powerPlayScore["India"].begin(), sl.powerPlayScore["India"].end(), 0);
	int sumSecondpowerPlayScore = std::accumulate(ind.powerPlayScore["Srilanka"].begin(), ind.powerPlayScore["Srilanka"].end(), 0);

	int sumFirstpowerPlayWickets = std::accumulate(sl.powerPlayWickets["India"].begin(), sl.powerPlayWickets["India"].end(), 0);
	int sumSecondpowerPlayWickets = std::accumulate(ind.powerPlayWickets["Srilanka"].begin(), ind.powerPlayWickets["Srilanka"].end(), 0);
	greatermatchesscoreSum(sumFirstmatchesScores, sumSecondmatchesScores);
	greatermatchesWickets(sumFirstmatchesWickets, sumSecondmatchesWickets);
	greaterpowerplayScore(sumFirstpowerPlayScore, sumSecondpowerPlayScore);
	greaterpowerplayWickets(sumFirstpowerPlayWickets, sumSecondpowerPlayWickets);
	int finalscore = (averagescore + score) / (2);
	cout << endl;
	cout << "Final Score second team: " << finalscore << endl;
	//defining the winner
	cout << endl;


	if (score > finalscore) {

		cout << "Prediction:India will Win" << endl;
	}
	else {
		cout << "Prediction:Australia will Win" << endl;
	}
	}
	else if ((country1 == "Australia" || country1 == "australia") && (country2 == "Bangladesh" || country2 == "bangladesh")) {
	int sumFirstmatchesScores = std::accumulate(aus.matchesScores["Bangladesh"].begin(), aus.matchesScores["Bangladesh"].end(), 0);
	int sumSecondmatchesScores = std::accumulate(ban.matchesScores["Australia"].begin(), ban.matchesScores["Australia"].end(), 0);

	int sumFirstmatchesWickets = std::accumulate(aus.matchesWickets["Bangladesh"].begin(), aus.matchesWickets["Bangladesh"].end(), 0);
	int sumSecondmatchesWickets = std::accumulate(ban.matchesWickets["Australia"].begin(), ban.matchesWickets["Australia"].end(), 0);

	int sumFirstpowerPlayScore = std::accumulate(aus.powerPlayScore["Bangladesh"].begin(), aus.powerPlayScore["Bangladesh"].end(), 0);
	int sumSecondpowerPlayScore = std::accumulate(ban.powerPlayScore["Australia"].begin(), ban.powerPlayScore["Australia"].end(), 0);

	int sumFirstpowerPlayWickets = std::accumulate(aus.powerPlayWickets["Bangladesh"].begin(), aus.powerPlayWickets["Bangladesh"].end(), 0);
	int sumSecondpowerPlayWickets = std::accumulate(ban.powerPlayWickets["Australia"].begin(), ban.powerPlayWickets["Australia"].end(), 0);
	greatermatchesscoreSum(sumFirstmatchesScores, sumSecondmatchesScores);
	greatermatchesWickets(sumFirstmatchesWickets, sumSecondmatchesWickets);
	greaterpowerplayScore(sumFirstpowerPlayScore, sumSecondpowerPlayScore);
	greaterpowerplayWickets(sumFirstpowerPlayWickets, sumSecondpowerPlayWickets);
	int finalscore = (averagescore + score) / (2);
	cout << endl;
	cout << "Final Score second team : " << finalscore << endl;
	//defining the winner
	cout << endl;


	if (score > finalscore) {

		cout << "Prediction:Australia will Win" << endl;
	}
	else {
		cout << "Prediction:India will Win" << endl;
	}
	}
	else if ((country1 == "Bangladesh" || country1 == "bangladesh") && (country2 == "Australia" || country2 == "australia")) {
	int sumFirstmatchesScores = std::accumulate(ban.matchesScores["Australia"].begin(), ban.matchesScores["Australia"].end(), 0);
	int sumSecondmatchesScores = std::accumulate(aus.matchesScores["Bangladesh"].begin(), aus.matchesScores["Bangladesh"].end(), 0);

	int sumFirstmatchesWickets = std::accumulate(ban.matchesWickets["Australia"].begin(), ban.matchesWickets["Australia"].end(), 0);
	int sumSecondmatchesWickets = std::accumulate(aus.matchesWickets["Bangladesh"].begin(), aus.matchesWickets["Bangladesh"].end(), 0);

	int sumFirstpowerPlayScore = std::accumulate(ban.powerPlayScore["Australia"].begin(), ban.powerPlayScore["Australia"].end(), 0);
	int sumSecondpowerPlayScore = std::accumulate(aus.powerPlayScore["Bangladesh"].begin(), aus.powerPlayScore["Bangladesh"].end(), 0);

	int sumFirstpowerPlayWickets = std::accumulate(ban.powerPlayWickets["Australia"].begin(), ban.powerPlayWickets["Australia"].end(), 0);
	int sumSecondpowerPlayWickets = std::accumulate(aus.powerPlayWickets["Bangladesh"].begin(), aus.powerPlayWickets["Bangladesh"].end(), 0);
	greatermatchesscoreSum(sumFirstmatchesScores, sumSecondmatchesScores);
	greatermatchesWickets(sumFirstmatchesWickets, sumSecondmatchesWickets);
	greaterpowerplayScore(sumFirstpowerPlayScore, sumSecondpowerPlayScore);
	greaterpowerplayWickets(sumFirstpowerPlayWickets, sumSecondpowerPlayWickets);
	int finalscore = (averagescore + score) / (2);
	cout << endl;
	cout << "Final Score second team : " << finalscore << endl;
	//defining the winner
	cout << endl;


	if (score > finalscore) {

		cout << "Prediction:Australia will Win" << endl;
	}
	else {
		cout << "Prediction:India will Win" << endl;
	}
	}
	
	return 0;
}
