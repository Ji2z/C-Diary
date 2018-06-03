#include <iostream>
#include <string>
#include <fstream>
#include <direct.h>
#include <stdlib.h>

using namespace std;

class Date {
public:
	char year[10];
	char month[10];
	char day[10];
};

class Emotion {
	int happy{ happy = 0};
	int joyth{ joyth = 0 };
	int sad{ sad = 0 };
	int angry{ angry = 0 };
	int boring{ boring = 0 };
public:
	void GetEmotion(char em[10]);
};
void Emotion::GetEmotion(char em[10]) {
	char em1[10];
	if (em == "기쁨") {
		happy++;
		//return happy;
		//exit;
	}
	else if (em == "설렘") {
		joyth++;
		//return joyth;
		//exit;
	}
	else if (em == "슬픔") {
		sad++;
		//return sad;
		//exit;
	}
	else if (em == "화남") {
		angry++;
		//return angry;
		//exit;
	}
	else if (em == "무료") {
		boring++;
		//return boring;
		//exit;
	}
	else {
		cout << "다시 입력하세요.";
		cin.getline(em1, 10);
		GetEmotion(em1);
	}
}
class Diary {
public:
	Emotion emotion;
	Date date;
};

void MakeDir(char filename[20], char *year, char* month) {// 폴더생성(ex.2018.06)
	strcat(filename, year);
	strcat(filename, ".");
	strcat(filename, month);
	_mkdir(filename);
}

void WriteTxt(string name1, string name2, string name3, string text) {
	ofstream f;
	f.open(name1 + name2 + name3 + ".txt");
	f << text;
	f.close();
}


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

int main() {
	void GetDiary();
	GetDairy();

	return 0;

}
