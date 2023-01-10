//judul
//menentukan apakah segitiga siku-siku atau tidak
//oleh Nasya fauziah
//11 sept 2022

#include <iostream>
#include <math.h>
using namespace std;

//kamus
float a, t, s; //a= alas, t=tinggi, s=sisi miring

int main ()
{
    cout << "====================================="<<endl;
    cout << "MEMBUKTIKAN SEGITIGA SIKU-SIKU" <<endl;
    cout << "====================================="<<endl;

    cout << "Masukkan nilai alas : ";
    cin >> a;

    cout << "Masukkan nilai tinggi : ";
    cin>> t;

    s = sqrt (pow (a,2)+pow(t,2)); // s=sisi miring, a=alas, t=tinggi
    cout << "nilai sisi miringnya adalah : " <<s <<endl ;
    cout << "====================================="<<endl;

    if (s = sqrt (pow (a,2)+pow(t,2)))
    {
        cout << "merupakan segitiga siku-siku"<<endl;
        cout << "====================================="<<endl;
    }

    else
    {
        cout << "bukan termasuk segitiga siku-siku";
        cout << "====================================="<<endl;
    }



    return 0;

}
