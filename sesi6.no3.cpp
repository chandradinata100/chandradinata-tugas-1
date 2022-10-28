#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;
int main(){
  char kata1[20], kata2[20];

cout << "Kalimat 1 = ";
  cin >> kata1;
  cout << "Kalimat 2 = ";
  cin >> kata2;

strcat(kata1,kata2);
  cout << "Menjadi : "<< kata1;
  getchar();
  }