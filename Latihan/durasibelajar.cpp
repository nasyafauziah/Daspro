//judul
// menghitung berapa lama durasi belajar
// oleh Nasya Fauziah
// 11 September 2022

#include <iostream>
using namespace std;

//kamus
int J1, M1, J2, M2, mulai, selesai, durasi, durasijam, durasimenit, sisa;
// J1= jam mulai belajar, M1= menit mulai belajar, J2= Jam selesai belajar, M2= menit selesai belajar

int main()
{
    cout << " Menghitung Lama Durasi Belajar"<< endl;
    cout <<"================================"<< endl;

    cout << "Jam mulai belajar : " ;
    cin >> J1;
    cout << "Menit mulai belajar : ";
    cin >>M1;
    mulai = (J1*3600)+ (M1*60);



    cout << "--------------------------------" << endl;
    cout << "Jam selesai belajar : ";
    cin >> J2;
    cout << "Menit selesai belajar : ";
    cin >> M2;
    selesai = (J2*3600)+ (M2*60);

    cout << "--------------------------------" << endl;
    durasi = selesai-mulai;
    durasijam = durasi/3600;
    sisa = durasi%3600;
    durasimenit = sisa/60;

    cout << "Lama belajar adalah : " << durasijam << " jam " << durasimenit << " menit " << endl;

    return 0;




}
