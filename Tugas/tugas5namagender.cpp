//judul
//Input nama dan gender
// Oleh Nasya Fauziah

#include<iostream>
using namespace std;

//kamus
string Nama, NIM, jnskelamin;

//diskripsi
main ()
{
    cout << "==============================================================================================" << endl;
    cout << "Masukkan Nama : " ;
    getline (cin, Nama);

    cout << "Masukkan NIM : " ;
    getline (cin, NIM);

    cout << "Pilih Jenis Kelamin (p/l) : ";
    cin >> jnskelamin;
    cout << "================================================================================================" << endl;

    if (jnskelamin=="l")
       {
          cout << "Halo " << Nama <<", NIM " << NIM << endl <<"Jenis kelamin anda Laki-laki " << endl ;
       }
    else
    if (jnskelamin=="p")
    {
        cout << "Halo " << Nama <<", NIM " << NIM << endl <<"Jenis kelamin anda Perempuan " << endl;
    }
    cout << "================================================================================================" << endl;

    return 0;
}
