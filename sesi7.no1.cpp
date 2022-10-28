#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int a;
char nama[5][20];
int mid[5];
int finals[5];
int hasil[5];

for(a=1;a<=2;a++){
cout<<"Data Ke - "<<a<<endl;
cout<<"Nama Siswa : ";
cin >> nama[a];
  cout<<"Nilai MidTest : " ; 
  cin>>mid[a];
  cout<<"Nilai Final : "; 
  cin>>finals[a];
}
  for(a=1;a<=2;a++){
  
  hasil[a] = (mid[a]+finals[a])/2;
  cout<<endl;
    }
  cout<<"------------------------------------------"<<endl;
cout<<"No. Nama Siswa \t\t Nilai \tNilai\tHasil"<<endl;
cout<<" \t\t\t\t\tMidTest Final   Ujian"<<endl;
cout<<"------------------------------------------"<<endl;
for(a=1;a<=2;a++)
{
cout<<setiosflags(ios::left)<<setw(4)<<a;
cout<<setiosflags(ios::left)<<setw(19)<<nama[a];
cout<<mid[a] <<"     ";
cout<<finals[a] <<"      ";
cout<<hasil[a] <<"              "<<endl;
}
cout<<"------------------------------------------"<<endl;
getchar();
}