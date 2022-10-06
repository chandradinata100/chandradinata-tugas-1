#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "    Program C++ Segitiga Bintang    " << endl;
  cout << "====================================" << endl;
  cout << endl;
 
  int tinggi,baris,jumlah;
 
  cout << "Input tinggi segitiga: ";
  cin >> tinggi;
 
  cout << endl;
 
  for(baris=1;baris<=tinggi;baris++) {
    for(jumlah=1;jumlah<=baris;jumlah++) {
      cout << " *";
    }
    cout << endl;
  }
 
  return 0;
}