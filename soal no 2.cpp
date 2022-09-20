#include <iostream>
#define phi 3.14152965
using namespace std;
int main() 
{
  float jari_jari, tinggi, volume, luas;
  jari_jari=5.0;
  tinggi=7;
  volume=phi*jari_jari*jari_jari*tinggi;
  luas=2*phi*jari_jari*tinggi;
  cout<<"volume tabung="<<volume<<endl;
  cout<<"luas tabung="<<luas<<endl;
  getchar();
}