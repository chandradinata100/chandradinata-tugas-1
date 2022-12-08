#include <iostream>
using namespace std;

int main(){
  int angka;
  int *nilai = &angka;

  cout <<"Masukkan Bilangan : " ;
  cin >> angka;
  cout << "Alamat Bilangan : " << &angka <<endl;

    if ((*nilai)%2 == 0){
      cout << "Bilangan" << *nilai <<" Merupakan bilangan genap.";}
    else {
      cout << "Bilangan" << *nilai <<" Merupakan bilangan ganjil.";}

  return 0;
}