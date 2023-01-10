//judul
// menentukan lingkaran yang meilliki jari-jari lebih besar
// oleh Nasya Fauzaih
// 11 sept 2022

#include <iostream>
using namespace std;

//kamus
int r1, r2 ;

//diskripsi
int main ()
{
    cout << "Menentukan Lingkaran yang memiliki jari-jari lebih besar" << endl;
    cout << "========================================================" << endl;

    cout << "jari-jari 1 : ";
    cin >> r1;
    cout << "---------------------------------------------------------" << endl;

    r2 = r1-15;
    cout << "Maka jari-jari 2 : " << r2 << endl;

    if (r1>r2)
    {
        cout << "Jadi jari-jari lingkaran 1 lebih besar" << endl;
    }
    else
    {
        cout << "Jadi jari-jari lingkaran 2 lebih besar"<< endl;
    }
    cout << "========================================================" << endl;
}
