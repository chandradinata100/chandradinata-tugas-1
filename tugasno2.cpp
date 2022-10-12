#include <iostream>
using namespace std;

int main(){

int total, angka, n = 1;
while (n <= 10){
    angka = (2*n)-1;
    total += angka;
    cout << angka;
    n++;
    if (angka <((2*10)-1))
    cout << " + "; 
}
cout << " = " << total; 
}
