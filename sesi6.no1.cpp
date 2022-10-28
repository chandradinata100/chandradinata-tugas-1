#include <iostream>
using namespace std;
#include <string.h>

int main()
{
       char string[70]; 
       int jum_karakter;
      
       cout<<"silahkan masukkan kalimatnya disamping : ";
       cin.getline(string, sizeof(string));
       jum_karakter = 0;
       for(int i = 0; string[i]; i++)
              jum_karakter++;

       cout<<"panjang katanya sebanyak  = "<<jum_karakter<<" karakter"<<endl;  
       return 0;
}