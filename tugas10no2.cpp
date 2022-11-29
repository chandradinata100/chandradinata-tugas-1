/* ---------------------------- */
/* Penggunaan Call By Reference */
/* Program Tambah Nilai */
/* ---------------------------- */

#include<iostream>
using namespace std;
void tambah (int* c, int* d);
int main(){
    int a,b;
    a = 4;
    b = 6;

    cout <<"Nilai sebelum pemanggilan fungsi : ";
    cout<<"\na = "<<a<<" b = "<<b;
    tambah(&a,&b);
    cout<<"\nNilai Setelah Pemanggilan Fungsi";
    cout<<"\na = "<<a<<" b = "<<b;
}

void tambah (int* c, int* d){
    *c += 7;
    *d += 5;
    cout <<endl;
    cout <<"\n\nNilai di Akhir Fungsi Tambah()";
    cout<<"\nc = "<<*c<<" d = "<<*d;  
}