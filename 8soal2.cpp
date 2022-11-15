#include <iostream>
using namespace std;

int main () {
  int harga[10],p,q,r[10],jumlah[10],totalharga = 0,hargaakhir,pajak;
  char jenis;
  string tipe[10];
  
cout << "|-----------------------------|" << endl;
cout << "| GEROBAK FRIED CHIKEN        |" << endl;
cout << "|-----------------------------|" << endl;
cout << "| Kode | Jenis | Harga        |" << endl;
cout << "|-----------------------------|" << endl;
cout << "| D | Dada | Rp.2500 |" << endl;
cout << "| P | Paha | Rp.2000 |" << endl;
cout << "| S | Sayap| Rp.1500 |" << endl;
cout << "|-----------------------------|" << endl;
  cout << "Banyak Pesanan : ";
  cin >> p;

  for (q = 0 ; q < p ; q++){
    cout << "Pesanan ke - " << q+1 << endl;
ulang:
cout << "Jenis potongan [D/P/S] : ";
cin >> jenis;
  if ( jenis == 'D' || jenis == 'd'){
    r[q]=2500;
    tipe[q]= "Dada ";
  } else if ( jenis == 'P' || jenis == 'p' ){
    r[q]=2000;
    tipe[q]= "Paha ";
  } else if ( jenis == 'S' || jenis == 's' ){
    r[q]=3500;
    tipe[q]= "Sayap";
  } else{
    cout << "Invalid";
    goto ulang;
  }
    cout << "Jumlah Potongan : ";
    cin >> jumlah[q];

    harga[q] = jumlah[q]*r[q];
  }

    cout <<"|----------------------------------------|"<<endl;
    cout <<"| GEROBAK FRIED CHICKEN |"<<endl;
    cout <<"|----------------------------------------|"<<endl;
    cout <<"| No| Jenis | Harga | Jumlah | Jumlah    |"<<endl;
    cout <<"|   | Potong| Satuan| Beli   | Harga     |"<<endl;
    cout <<"|----------------------------------------|"<<endl;

    for (q = 0 ; q < p ; q++){
      cout << "| " << q+1 << " | "<< tipe[q] << " | " << r[q] << " | " << jumlah[q] << " | " << harga[q] << " |" << endl;
      totalharga += harga[q];
    }
    pajak = totalharga*0.1;
    cout <<"|----------------------------------------|"<<endl;
    cout <<" Harga total = "<< totalharga;
    cout <<"\n Pajak 10% = "<< pajak;
    cout <<"\n Total Bayar = "<< totalharga + pajak;
  return 0 ;
}