#include <iostream>
#include <string.h>

using namespace std;
int main(){
  char tulisan[70];
  cout << "silahkan tulis kalimat disamping = ";
  cin.getline(tulisan, sizeof(tulisan));
  int x = strlen(tulisan);
  for(int i = x-1;i>=0;i--){
    cout << tulisan[i];
  }
}