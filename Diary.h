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
	if (em == "���") {
		happy++;
		//return happy;
		//exit;
	}
	else if (em == "����") {
		joyth++;
		//return joyth;
		//exit;
	}
	else if (em == "����") {
		sad++;
		//return sad;
		//exit;
	}
	else if (em == "ȭ��") {
		angry++;
		//return angry;
		//exit;
	}
	else if (em == "����") {
		boring++;
		//return boring;
		//exit;
	}
	else {
		cout << "�ٽ� �Է��ϼ���.";
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