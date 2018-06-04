#include "Diary.h"
#include "DiaryF.h"

void MakeDir(char filename[20], char *year, char* month) {// Æú´õ»ı¼º(ex.2018.06)
	strcat(filename, year);
	strcat(filename, ".");
	strcat(filename, month);
	_mkdir(filename);
}
