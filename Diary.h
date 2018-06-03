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
	int happy{ happy = 0 };
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

int main();
void GetDairy();
void WriteTxt(string name1, string name2, string name3, string text);
void MakeDir(char filename[20], char *year, char* month);