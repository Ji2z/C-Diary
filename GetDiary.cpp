#include "Diary.h"


void GetDairy() {
	char wh, em[10];
	char letter[500];
	char filename[20];
	Date date;
	Emotion emotion;

	cout << "날짜(YYYY MM DD): ";
	cin >> date.year >> date.month >> date.day;
	//cout << date.year<< endl;
	//cout << date.month<<endl;
	//cout << date.day<<endl;
	cout << "날씨: ";
	cin >> wh;
	cout << "감정(기쁨, 설렘, 슬픔, 화남, 무료): ";
	cin.getline(em, 10);
	emotion.GetEmotion(em);
	
	MakeDir(filename, date.year, date.month);

	cout << "일기를 입력하세요." << endl;
	cin.getline(letter, 500, '끝');

	WriteTxt(date.year, date.month, date.day, letter);
	
}
