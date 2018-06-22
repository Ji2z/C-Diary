#pragma once 
#include "Diary.h"
#include "DiaryF.h"


void GetDairy() {
	char wh, em;
	char letter[500];
	char filename[20];
	Date date;
	Emotion emotion;

	cout << "날짜(YYYY MM DD): ";
	cin >> date.year >> date.month >> date.day;
	cout << "날씨: ";
	cin >> wh;
	cout << "감정(기쁨:H, 설렘:J, 슬픔:S, 화남:A, 무료:B): ";
	cin >> em;
	emotion.GetEmotion(em);

	cout << "일기를 입력하세요." << endl;
	cin.getline(letter, 500, '끝');

	WriteTxt(date.year, date.month, date.day, letter);
	
}
