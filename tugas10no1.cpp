#include <iostream>
using namespace std;

long int pangkatrekrusif (long int a,long int b){

    if (b > 0){
        return (a * pangkatrekrusif (a,b-1));
    } else {
        return 1; 
    }
}
int main(){
	
 long int a,b,pangkatrekrusif (long int a,long int b);
	
 cout<<"MENGHITUNG PANGKAT DENGAN FUNGSI REKRUSIF"<< endl;
 cout<<"Masukan Nilai a = ";
 cin>>a;
	
 cout<<"Masukan Nilai b = ";
 cin>>b;
 cout<<endl;
 cout<<a<<" Dipangkatkan "<<b<<" = "<<pangkatrekrusif ( a, b)<<endl;
}