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

void MakeDir(char filename[20], char *year, char* month) {// ��������(ex.2018.06)
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

	cout << "��¥(YYYY MM DD): ";
	cin >> date.year >> date.month >> date.day;
	//cout << date.year<< endl;
	//cout << date.month<<endl;
	//cout << date.day<<endl;
	cout << "����: ";
	cin >> wh;
	cout << "����(���, ����, ����, ȭ��, ����): ";
	cin.getline(em, 10);
	emotion.GetEmotion(em);
	
	MakeDir(filename, date.year, date.month);

	cout << "�ϱ⸦ �Է��ϼ���." << endl;
	cin.getline(letter, 500, '��');

	WriteTxt(date.year, date.month, date.day, letter);
	
}

int main() {
	void GetDiary();
	GetDairy();

	return 0;

}
