//judul
//menghitung luas lingkaran donat bolong
//oleh Nasya Fauziah
//12 September 2022

#include <iostream>
using namespace std;

//kamus
int r1, r2; // r1= jari-jari lingkaran 1, r2=jari-jari lingkaran 2
float L1, L2, LD, phi=3.14 ;
// r2 = r1-15

int main()
{
    cout << "MENGHITUNG LUAS LINGKARAN (DONAT BOLONG)" << endl;
    cout << "============================================" << endl;
    cout << "Jari-jari Lingkaran 1 : ";
    cin >> r1;
    L1 = 3.14*r1*r1; //L1 = Luas lingkaran 1
    cout << "Luas lingkaran 1 adalah : " << L1 << endl;
    cout << "--------------------------------------------" << endl;

    r2 = r1-15;
    cout << "Jari-jari lingkaran 2 : " << r2 << endl;
    L2 = 3.14*r2*r2; //L2= Luas lingkaran 2
    cout << "Luas lingakaran 2 adalah : " << L2 << endl;
    cout << "--------------------------------------------" << endl;

    LD = L1-L2;
    cout << "Luas donat yang bolong adalah : " << LD << endl;
    cout << "============================================" << endl;

    return 0;
}
