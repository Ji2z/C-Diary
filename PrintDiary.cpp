#pragma once
#include "Diary.h"
#include "DiaryF.h"

void PrintDiary()
{
	cout << "당신의 감정을 간략하게 표현하자면..\n";
	cout << "(단, 기쁨:H, 설렘:J, 슬픔:S, 화남:A, 무료:B 만 입력하세요):";

	char input;
	
	cin >> input;
	if (input == 'H' || input == 'J')
	{
		cout << "-------------Message-----------------\n";
		cout << "오늘하루 행복해서 다행이예요^*^\n";
		cout << "내일도 행복하길 바래요.\n";
		cout << "-------------------------------------\n";
		Sleep(1000);

	}
	else if (input == 'A' || input == 'S')
	{
		cout << "-------------Message-----------------\n";
		cout << "          힘내세요!!!!1^ ^\n";
		cout << "       제가 위로해드릴게요\n";
		cout << "-------------------------------------\n";
		Sleep(1000);
	}
	else if (input == 'B')
	{
		cout << "-------------Message-----------------\n";
		cout << "내일은 특별한 일이 일어나길 빌게요.\n";
		cout << "내일도 화이팅!\n";
		cout << "-------------------------------------\n";

		Sleep(1000);
	}
	else {
		cout << "잘못 입력하셨습니다\n";
		Sleep(600);
	}
}
