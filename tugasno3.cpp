#include <iostream>
using namespace std;

int main(){

int total, angka, n = 1;
while (n <= 10){
    angka = 2*n;
    total += angka;
    cout << angka; 
    n++;
    if (angka <2*10)
    cout << " + "; 
}
cout << " = " << total; 
}