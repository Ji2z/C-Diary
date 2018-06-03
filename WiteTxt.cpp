#include "Diary.h"

void WriteTxt(string name1, string name2, string name3, string text) {
	ofstream f;
	f.open(name1 + name2 + name3 + ".txt");
	f << text;
	f.close();
}