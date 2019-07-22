//Lab Assignment #5: Functions and Pass by Value
//Program Name: Programmer Defined Function
//Purpose of the program: Calculate judge's scores
//Authors: Asia
//Date: 2/16/2017

//COMPLETED ON 3/14/2019
//Author: Asia V

#include <iostream>
#include <vector>
using namespace std;


int main()
{
	//declaring the variables
	int x;
	int judge;
	double score;
	double lowest, highest;
	double sumScores = 0.0;
	double fourScores = 0.0;
	vector<double> scoresList;
	vector<double> contestantScore;
	double findLowest(vector<double> scoresList);
	double findHighest(vector<double> scoresList);
	int numContestant;
	int contestant;

	

	//A for loop to collect judge scores, between 0 and 10, adding them to vector and sum 
	cout << "Ballroom Dancing Competition" << endl << "***********************" << endl;
	cout << "Enter the number of contestants: ";
	cin >> numContestant;
	cout << endl;
	for (contestant = 1; contestant <= numContestant; ++contestant) {
		for (judge = 1; judge <= 6; ++judge) {
			cout << "Judge " << judge << " please enter your score: ";
			cin >> score;
			scoresList.push_back(score);
			cout << endl;
			sumScores += score;

			while (score < 0 || score > 10) {
				cout << "Error: score must be a value between 0 and 10. Try again." << endl;
				cout << "Judge " << judge << " please enter your score: ";
				sumScores -= score;
				scoresList.pop_back();
				cin >> score;
				scoresList.push_back(score);
				cout << endl;
			}
			score = 0.0;
		}
	}


	cout << sumScores << endl;
	//the lowest score
	lowest = findLowest(scoresList);
	cout << "The lowest score was: " << lowest << endl;


	//the highest score 
	highest = findHighest(scoresList);
	cout << "The highest score was: " << highest << endl;

	//the average of the other 4 scores
	fourScores = sumScores -lowest - highest;
	cout << "The average of the other four scores is: " << fourScores / 4 << endl;

	return 0;
}

//finding the lowest score
double findLowest(const vector<double> scoresList)
{		
	double lowestScore = scoresList[0];
	for (int index = 1; index <scoresList.size(); index++)
	{
		if (scoresList[index] < lowestScore)
			lowestScore = scoresList[index];
	}
	return lowestScore;
}

//finding the highest score
double findHighest(const vector<double> scoresList)
{
	double highestScore = scoresList[0];
	for (int index = 1; index <scoresList.size(); index++)
	{
		if (scoresList[index] > highestScore)
			highestScore = scoresList[index];
	}

	return highestScore;
}