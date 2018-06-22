#pragma once
#include "Diary.h"
#include "DiaryF.h"


int main() {
	char answer;
	int num;

	cout << "		* * * * * * * * * * * * * * * * * * * * * * * * * *\n"; Sleep(350);
	cout << "			일\n"; Sleep(350);
	cout << "		 * * * * * * * * * * * * * * * * * * * * * * * * * *\n"; Sleep(350);
	cout << "				기\n"; Sleep(350);
	cout << "		* * * * * * * * * * * * * * * * * * * * * * * * * *\n"; Sleep(350);
	cout << "					를\n"; Sleep(350);
	cout << "		 * * * * * * * * * * * * * * * * * * * * * * * * * *\n"; Sleep(350);
	cout << "						쓰\n"; Sleep(350);
	cout << "		* * * * * * * * * * * * * * * * * * * * * * * * * *\n"; Sleep(350);
	cout << "							자\n"; Sleep(350);
	cout << "		 * * * * * * * * * * * * * * * * * * * * * * * * * *\n"; Sleep(350);
	cout << "								C-Diary\n"; Sleep(350);
	cout << "		* * * * * * * * * * * * * * * * * * * * * * * * * *\n"; Sleep(350);
	cout << "		 * * * * * * * * * * * * * * * * * * * * * * * * * *\n"; Sleep(1000);
	system("cls");

	
	cout << "돌발 질문!!" << endl <<"답은 저장하지 않겠습니다^^. 마음속으로 답해주세요.\n"; Sleep(800);
	RandomQuest();
	for (num = 0; num < 8; num++) {
		cout << "▷";
		Sleep(500);
	}
	cout << "\n생각해보셨나요?? 이제 일기를 쓰러 갑시다 ^ㅇ^\n"; Sleep(800);
	system("cls");
	cout << "오늘의 일기를 작성하시겠습니까? (y 또는 n으로 대답):";
	cin >> answer;

	if (answer == 'y')
	{
		cout << "오늘의 일기를 작성해 주세요.\n\n";
		GetDairy();
		cout << "\n일기 프로그램을 종료 하겠습니다\n";
		Sleep(800);
	}
	else if (answer == 'n')
	{
		cout << "지금의 감정을 입력하시겠습니까? (y 또는 n으로 대답):";
		cin >> answer;
		if (answer == 'y') {
			system("cls");
			PrintDiary();
		}
		else if(answer == 'n') {
		cout << "일기 프로그램을 종료 하겠습니다\n";
		Sleep(500);
		}
	}
	
	return 0;

}
