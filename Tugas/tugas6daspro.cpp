//judul
//program perhitungan aritmatika
//oleh nasya fauziah
//24 september 2022

#include <iostream>
using namespace std;

//kamus
int perkalian, pengurangan, penjumlahan;
float pembagian,  angka1, angka2;


main ()
{
    cout << "Menghitung Perhitungan Aritmatika" << endl;
    cout << "===========================================================" << endl;
    cout << "Masukkan angka : " ;
    cin >> angka1;
    cout << "Masukkan angka : " ;
    cin >> angka2;

    perkalian = angka1*angka2;
    cout << "-----------------------------------------------------------" << endl;
    cout << "Hasil perkalian : " << perkalian << endl;
    cout << "-----------------------------------------------------------" << endl;

    pembagian = angka1/angka2;
    cout << "Hasil pembagian : " << pembagian << endl;
    cout << "-----------------------------------------------------------" << endl;

    pengurangan = angka1-angka2;
    cout << "Hasil pengurangan : " << pengurangan << endl;
    cout << "-----------------------------------------------------------" << endl;

    penjumlahan = angka1+angka2;
    cout << "Hasil penjumlahan : " << penjumlahan << endl;
    if (penjumlahan%2==0)
       {
          cout << "hasil penjumlahan termasuk bilangan genap" << endl ;
       }
    else
    if (penjumlahan%2!=0)
    {
        cout << "Hasil dari penjumlahan tersebut termasuk bilangan ganjil" << endl;
    }
    cout << "===========================================================" << endl;




    return 0;
}
