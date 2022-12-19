#include <iostream>
using namespace std;

struct mhs{
char nama[20];
char nim[10];
char matkul[15];
int sks;
};

struct mhs bayar[2];

int main(){
  int bts,var,tetap;
  for(int i=0; i<2; i++){
  cout << " \n\n-------------------------------\n";
  cout << " \nNama Mahasiswa : ";
  cin >> bayar[i].nama;
  cout << "NIM : ";
  cin >> bayar[i].nim;
  cout << "Matkul : ";
  cin >> bayar[i].matkul;
if(bayar[i].sks<0 || bayar[i].sks){
cout << "Program tidak sesuai\n";
} cout << "Jumlah sks : ";
  cin >> bayar[i].sks;
    
if(bayar[i].sks==0){
tetap = 250000;
var = bayar[i].sks*250000;
}else if(bayar[i].sks){
tetap = 300000;
var = bayar[i].sks*300000;
}cout << endl;
 cout << "\n\n-------------------------------\n";
 cout << " Output ";
 cout << "\n---------------------------------\n";
 cout << "\nNama Mahasiswa = " << bayar[i].nama ;
 cout << "\nNIM = " << bayar[i].nim ;
 cout << "\nMata Kuliah = " << bayar[i].matkul ;
 cout << "\nJumlah SKS = " << bayar[i].sks ;
 cout << "\nSPP Tetap = " << tetap ;
 cout << "\nSPP Variabel = " << var ;
 cout << endl << endl;
  }
}