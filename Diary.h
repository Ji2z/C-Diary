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
	inline void GetEmotion(char em) {
		char em1;
		if (em == 'H')
			happy++;
		else if (em == 'J')
			joyth++;
		else if (em == 'S')
			sad++;
		else if (em == 'A')
			angry++;
		else if (em == 'B')
			boring++;
		else {
			cout << "다시 입력하세요.";
			cin >> em1;
			GetEmotion(em1);
		}
	};
};

class Diary {
public:
	Emotion emotion;
	Date date;
};
