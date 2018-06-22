#pragma once 
#include "Diary.h"
#include "DiaryF.h"


void GetDairy() {
	string wh, em;
	char letter[10000];
	Date date;

	cout << "날짜(YYYY MM DD): ";
	cin >> date.year >> date.month >> date.day;
	cout << "날씨: ";
	cin >> wh;
	cout << "기분: ";
	cin >> em;
	cout << endl << "일기를 입력하세요." << endl;
	cin.getline(letter, 10000, '끝');

	WriteTxt(date.year, date.month, date.day, letter);
}
