#include "Diary.h"


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
