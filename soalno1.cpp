#include <iostream>
using namespace std;
int main() {
  for (int baris = 1; baris < 6; baris++) 
  {
    for (int kolom = 1; kolom <= 6; kolom++) 
    {
      cout <<baris << " ";
    }
    cout << "\n";
  }
  return 0;
}