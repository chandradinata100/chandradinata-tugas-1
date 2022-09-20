#include<iostream>
using namespace std;
#define harga 4500
int main (){
  float jumlah,total;
  cout <<"masukkan jumlah barang = ";
  cin >> jumlah;
  total = harga*jumlah;
  cout << "\nYang harus dibayar = " << total;

  return 0;
  
}
