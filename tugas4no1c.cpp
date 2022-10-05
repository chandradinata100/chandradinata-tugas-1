#include <iostream>
using namespace std;
int main()

{

int nilai1, nilai2, nilai3, nilaiakhir;
string nama;

cout <<"Masukkan nama siswa = ";
cin >>nama;

cout <<"Masukkan nilai pertandingan pertama "<<nama<<" = ";
cin >>nilai1;

cout <<"Masukkan nilai pertandingan kedua " <<nama<<" = ";
cin >>nilai2;

cout <<"Masukkan nilai pertandingan ketiga " <<nama<<" = ";
cin >>nilai3;

nilaiakhir = (nilai1+nilai2+nilai3)/3;

cout<<"Nilai rata-rata pertandingan dari " <<nama<< " adalah = "<<nilaiakhir<<endl;

if (nilaiakhir >= 85)

cout <<"Selamat! "<<nama<<" telah memenangkan Komputer Core i5!";

else if (nilaiakhir >= 70)

cout <<"Selamat! " <<nama<<" telah memenangkan uang tunai sebesar Rp. 2.500.000,-";

else 

cout <<"Semoga beruntung di kesempatan berikutnya!";

return 0;
}

