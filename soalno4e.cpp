#include <iostream> 
using namespace std;

int main(){
  int nomor,a,b = 0;

  cout<<"Silahkan masukkan bilangan = ";
  cin >> nomor;

  for (a = 2; a < nomor/2; a++)
  {
    if (nomor%a == 0)
    {
    b = 9;
    break;
    }
  }
  if (b == 0)
    cout <<"Bilangan "<< nomor <<" merupakan bilangan nomor\n";
  else 
    cout <<"Bilangan "<< nomor <<" bukan termasuk bilangan nomor\n";
  return 0;
}