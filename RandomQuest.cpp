#pragma once 
#include "Diary.h"
#include "DiaryF.h"


using namespace std;

void RandomQuest()
{
	ifstream IQuest_File;
	ofstream OQuest_File;
	string Q[100];

	IQuest_File.open("question100.txt");
	for (int i = 0; i < 100; i++)
	{
		getline(IQuest_File, Q[i]);

	}
	srand(time(NULL));

	cout << Q[rand() % 100] << endl;

	IQuest_File.close();

}
