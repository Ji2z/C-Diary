
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
public:
 inline void GetEmotion(char em) {
  char em1;
  if ((em != 'H') && (em != 'J') && (em != 'S') && (em != 'A') && (em != 'B')) {
   cout << "다시 입력하세요.";
   cin >> em1;
   GetEmotion(em1);
  }
 }
};

class Diary {
public:
 Emotion emotion;
 Date date;
};
