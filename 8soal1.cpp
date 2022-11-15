#include <iostream>
using namespace std;
int main()
{
    int p, c, a[100][100], b[100][100], sum[100][100],min[100][100],times[100][100], w, j,d[100][100],k;

    cout << "Masukan Jumlah Baris (between 1 and 100): ";
    cin >> p;
    cout << "Masukan Jumlah Kolom (between 1 and 100): ";
    cin >> c;
    cout << endl << "Masukan matriks pertama: " << endl;

    for(w = 0; w < p; ++w)
        for(j = 0; j < c; ++j){
            cout << "Matriks a" << w + 1 << j + 1 << " : ";
            cin >> a[w][j];
        }

    cout << endl << "Masukan matriks kedua: " << endl;
    for(w = 0; w < p; ++w)
        for(j = 0; j < c; ++j){
             cout << "Matriks b" << w + 1 << j + 1 << " : ";
             cin >> b[w][j];
        }
        
        for(w = 0; w < p; ++w)
             for(j = 0; j < c; ++j){
                sum[w][j] = a[w][j] + b[w][j];
                min[w][j] = a[w][j] - b[w][j];
                d[w][j] = 0;
             }
        for(w = 0; w < p; ++w)
            for(j = 0; j < c; ++j)
                for(k = 0; k < c; ++k)
            {
                d[w][j] += a[w][k] * b[k][j];
            }


        for(w = 0; w < p; ++w)
             for(j = 0; j < c; ++j){
                
             }
        cout << endl << "Penjumlahan kedua matriks: " << endl;
        for(w = 0; w < p; ++w)
            for(j = 0; j < c; ++j){
                 cout << sum[w][j] << " ";
                 if(j == c - 1)
                cout << endl;
            }

        cout << endl << "Pengurangan kedua matriks: " << endl;
        for(w = 0; w < p; ++w)
            for(j = 0; j < c; ++j){
                  cout << min[w][j] << " ";
             if(j == c - 1)
         cout << endl;
         }

          cout << endl << "Perkalian kedua matriks: " << endl;
        for(w = 0; w < p; ++w)
            for(j = 0; j < c; ++j){
                  cout << d[w][j] << " ";
             if(j == c - 1)
         cout << endl;
         }

return 0;
}