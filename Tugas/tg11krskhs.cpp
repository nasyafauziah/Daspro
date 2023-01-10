//judul
//membuat krs khs
//oleh Nasya Fauziah
//12 oktober 2022
//revisi 2

#include <iostream>
using namespace std;

//kamus
string nama, nim, prodi, matkul1, matkul2, matkul3, matkul4, matkul5, matkul6, matkul7, tp; //tp=teoriataupraktek
int sks1, sks2, sks3, sks4, sks5, sks6, sks7, totalsks;
float uas1, psuas1, uts1, puts1, tgs1, ptgs1,uas2, psuas2, uts2, puts2, tgs2, ptgs2, uas3, psuas3, uts3, puts3, tgs3, ptgs3, uas4, psuas4, uts4, puts4, tgs4, ptgs4;
float uas5, psuas5, uts5, puts5, tgs5, ptgs5, uas6, psuas6, uts6, puts6, tgs6, ptgs6, uas7, psuas7, uts7, puts7, tgs7, ptgs7;
float nilai1, nilai2, nilai3, nilai4, nilai5, nilai6, nilai7, nilaiakhir;
char simpan;

//diskripsi
int main()
{

    cout << "" << endl;
    cout << "\t\t       KARTU RENCANA STUDY     " << endl;
    cout << "\t\t   UNIVERSITAS DIAN NUSWANTORO " << endl;
    cout << "\t\t-----------------------------------" << endl;
    cout << " Nama   : "; getline (cin, nama);
    cout << " NIM    : "; getline (cin, nim);
    cout << " Prodi  : "; getline (cin, prodi);
    cout << "" << endl;

    cout << " Mata Kuliah ke-1 " << endl;
    cout << " Nama Mata Kuliah                    : "; getline(cin, matkul1);
    cout << " SKS                                 : " ; cin>>sks1;
    cout << " T/P/TP (T:Teori, P:Praktek)         : " ; cin>>tp;
    do{
    if (tp=="T" || tp=="t")
    {
    cout << " Nilai UAS Teori                     : " ; cin>>uas1;
    cout << " % UAS Teori                         : " ; cin>>psuas1;
    cout << " Nilai UTS Teori                     : " ; cin>>uts1;
    cout << " % UTS Teori                         : " ; cin>>puts1;
    cout << " Nilai Tugas Teori                   : " ; cin>>tgs1;
    cout << " % Tugas Teori                       : " ; cin>>ptgs1;
    }
    else
    if (tp=="P" || tp=="p")
    {
    cout << " Nilai UAS Praktek                   : " ; cin>>uas1;
    cout << " % UAS Praktek                       : " ; cin>>psuas1;
    cout << " Nilai UTS Praktek                   : " ; cin>>uts1;
    cout << " % UTS Praktek                       : " ; cin>>puts1;
    cout << " Nilai Tugas Praktek                 : " ; cin>>tgs1;
    cout << " % Tugas Praktek                     : " ; cin>>ptgs1;
    }
    else
    {
    cout << " Nilai UAS Teori Praktek             : " ; cin>>uas1;
    cout << " % UAS Teori Praktek                 : " ; cin>>psuas1;
    cout << " Nilai UTS Teori Praktek             : " ; cin>>uts1;
    cout << " % UTS Teori Praktek                 : " ; cin>>puts1;
    cout << " Nilai Tugas Teori Praktek           : " ; cin>>tgs1;
    cout << " % Tugas Teori Praktek               : " ; cin>>ptgs1;
    }
    if (psuas1 + puts1 + ptgs1 !=100)
    {
    cout << "input % melebihi 100% tidak dapat terdeteksi, silahkan input kembali" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    }
    }while(psuas1 + puts1 + ptgs1 !=100);
    cout << "" << endl;


    cout << " Mata Kuliah ke-2 " << endl;
    cout << " Nama Mata Kuliah                    : "; cin.ignore();getline(cin, matkul2);
    cout << " SKS                                 : " ; cin>>sks2;
    cout << " T/P/TP (T:Teori, P:Praktek)         : " ; cin>>tp;
    do{
    if (tp=="T" || tp=="t")
    {
    cout << " Nilai UAS Teori                     : " ; cin>>uas2;
    cout << " % UAS Teori                         : " ; cin>>psuas2;
    cout << " Nilai UTS Teori                     : " ; cin>>uts2;
    cout << " % UTS Teori                         : " ; cin>>puts2;
    cout << " Nilai Tugas Teori                   : " ; cin>>tgs2;
    cout << " % Tugas Teori                       : " ; cin>>ptgs2;
    }
    else
    if (tp=="P" || tp=="p")
    {
    cout << " Nilai UAS Praktek                   : " ; cin>>uas2;
    cout << " % UAS Praktek                       : " ; cin>>psuas2;
    cout << " Nilai UTS Praktek                   : " ; cin>>uts2;
    cout << " % UTS Praktek                       : " ; cin>>puts2;
    cout << " Nilai Tugas Praktek                 : " ; cin>>tgs2;
    cout << " % Tugas Praktek                     : " ; cin>>ptgs2;
    }
    else
    {
    cout << " Nilai UAS Teori Praktek             : " ; cin>>uas2;
    cout << " % UAS Teori Praktek                 : " ; cin>>psuas2;
    cout << " Nilai UTS Teori Praktek             : " ; cin>>uts2;
    cout << " % UTS Teori Praktek                 : " ; cin>>puts2;
    cout << " Nilai Tugas Teori Praktek           : " ; cin>>tgs2;
    cout << " % Tugas Teori Praktek               : " ; cin>>ptgs2;
    }
    if (psuas2 + puts2 + ptgs2 !=100)
    {
    cout << "input % melebihi 100% tidak dapat terdeteksi, silahkan input kembali" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    }
    }while(psuas2 + puts2 + ptgs2 !=100);
    cout << "" << endl;

    cout << " Mata Kuliah ke-3 " << endl;
    cout << " Nama Mata Kuliah                    : "; cin.ignore();getline(cin, matkul3);
    cout << " SKS                                 : " ; cin>>sks3;
    cout << " T/P/TP (T:Teori, P:Praktek)         : " ; cin>>tp;
    do{
    if (tp=="T" || tp=="t")
    {
    cout << " Nilai UAS Teori                     : " ; cin>>uas3;
    cout << " % UAS Teori                         : " ; cin>>psuas3;
    cout << " Nilai UTS Teori                     : " ; cin>>uts3;
    cout << " % UTS Teori                         : " ; cin>>puts3;
    cout << " Nilai Tugas Teori                   : " ; cin>>tgs3;
    cout << " % Tugas Teori                       : " ; cin>>ptgs3;
    }
    else
    if (tp=="P" || tp=="p")
    {
    cout << " Nilai UAS Praktek                   : " ; cin>>uas3;
    cout << " % UAS Praktek                       : " ; cin>>psuas3;
    cout << " Nilai UTS Praktek                   : " ; cin>>uts3;
    cout << " % UTS Praktek                       : " ; cin>>puts3;
    cout << " Nilai Tugas Praktek                 : " ; cin>>tgs3;
    cout << " % Tugas Praktek                     : " ; cin>>ptgs3;
    }
    else
    {
    cout << " Nilai UAS Teori Praktek              : " ; cin>>uas3;
    cout << " % UAS Teori Praktek                  : " ; cin>>psuas3;
    cout << " Nilai UTS Teori Praktek              : " ; cin>>uts3;
    cout << " % UTS Teori Praktek                  : " ; cin>>puts3;
    cout << " Nilai Tugas Teori Praktek            : " ; cin>>tgs3;
    cout << " % Tugas Teori Praktek                : " ; cin>>ptgs3;
    }
    if (psuas3 + puts3 + ptgs3 !=100)
    {
    cout << "input % melebihi 100% tidak dapat terdeteksi, silahkan input kembali" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    }
    }while(psuas3 + puts3 + ptgs3 !=100);
    cout << "" << endl;

    cout << " Mata Kuliah ke-4 " << endl;
    cout << " Nama Mata Kuliah                    : "; cin.ignore();getline(cin, matkul4);
    cout << " SKS                                 : " ; cin>>sks4;
    cout << " T/P/TP (T:Teori, P:Praktek)         : " ; cin>>tp;
    do{
    if (tp=="T" || tp=="t")
    {
    cout << " Nilai UAS Teori                     : " ; cin>>uas4;
    cout << " % UAS Teori                         : " ; cin>>psuas4;
    cout << " Nilai UTS Teori                     : " ; cin>>uts4;
    cout << " % UTS Teori                         : " ; cin>>puts4;
    cout << " Nilai Tugas Teori                   : " ; cin>>tgs4;
    cout << " % Tugas Teori                       : " ; cin>>ptgs4;
    }
    else
    if (tp=="P" || tp=="p")
    {
    cout << " Nilai UAS Praktek                   : " ; cin>>uas4;
    cout << " % UAS Praktek                       : " ; cin>>psuas4;
    cout << " Nilai UTS Praktek                   : " ; cin>>uts4;
    cout << " % UTS Praktek                       : " ; cin>>puts4;
    cout << " Nilai Tugas Praktek                 : " ; cin>>tgs4;
    cout << " % Tugas Praktek                     : " ; cin>>ptgs4;
    }
    else
    {
    cout << " Nilai UAS Teori Praktek              : " ; cin>>uas4;
    cout << " % UAS Teori Praktek                  : " ; cin>>psuas4;
    cout << " Nilai UTS Teori Praktek              : " ; cin>>uts4;
    cout << " % UTS Teori Praktek                  : " ; cin>>puts4;
    cout << " Nilai Tugas Teori Praktek            : " ; cin>>tgs4;
    cout << " % Tugas Teori Praktek                : " ; cin>>ptgs4;
    }
    if (psuas4 + puts4 + ptgs4 !=100)
    {
    cout << "input % melebihi 100% tidak dapat terdeteksi, silahkan input kembali" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    }
    }while(psuas4 + puts4 + ptgs4 !=100);
    cout << "" << endl;


    cout << " Mata Kuliah ke-5 " << endl;
    cout << " Nama Mata Kuliah                    : "; cin.ignore();getline(cin, matkul5);
    cout << " SKS                                 : " ; cin>>sks5;
    cout << " T/P/TP (T:Teori, P:Praktek)         : " ; cin>>tp;
    do{
    if (tp=="T" || tp=="t")
    {
    cout << " Nilai UAS Teori                     : " ; cin>>uas5;
    cout << " % UAS Teori                         : " ; cin>>psuas5;
    cout << " Nilai UTS Teori                     : " ; cin>>uts5;
    cout << " % UTS Teori                         : " ; cin>>puts5;
    cout << " Nilai Tugas Teori                   : " ; cin>>tgs5;
    cout << " % Tugas Teori                       : " ; cin>>ptgs5;
    }
    else
    if (tp=="P" || tp=="p")
    {
    cout << " Nilai UAS Praktek                   : " ; cin>>uas5;
    cout << " % UAS Praktek                       : " ; cin>>psuas5;
    cout << " Nilai UTS Praktek                   : " ; cin>>uts5;
    cout << " % UTS Praktek                       : " ; cin>>puts5;
    cout << " Nilai Tugas Praktek                 : " ; cin>>tgs5;
    cout << " % Tugas Praktek                     : " ; cin>>ptgs5;
    }
    else
    {
    cout << " Nilai UAS Teori Praktek              : " ; cin>>uas5;
    cout << " % UAS Teori Praktek                  : " ; cin>>psuas5;
    cout << " Nilai UTS Teori Praktek              : " ; cin>>uts5;
    cout << " % UTS Teori Praktek                  : " ; cin>>puts5;
    cout << " Nilai Tugas Teori Praktek            : " ; cin>>tgs5;
    cout << " % Tugas Teori Praktek                : " ; cin>>ptgs5;
    }
    if (psuas5 + puts5 + ptgs5 !=100)
    {
    cout << "input % melebihi 100% tidak dapat terdeteksi, silahkan input kembali" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    }
    }while(psuas5 + puts5 + ptgs5 !=100);
    cout << "" << endl;


    cout << " Mata Kuliah ke-6 " << endl;
    cout << " Nama Mata Kuliah                    : "; cin.ignore();getline(cin, matkul6);
    cout << " SKS                                 : " ; cin>>sks6;
    cout << " T/P/TP (T:Teori, P:Praktek)         : " ; cin>>tp;
    do{
    if (tp=="T" || tp=="t")
    {
    cout << " Nilai UAS Teori                     : " ; cin>>uas6;
    cout << " % UAS Teori                         : " ; cin>>psuas6;
    cout << " Nilai UTS Teori                     : " ; cin>>uts6;
    cout << " % UTS Teori                         : " ; cin>>puts6;
    cout << " Nilai Tugas Teori                   : " ; cin>>tgs6;
    cout << " % Tugas Teori                       : " ; cin>>ptgs6;
    }
    else
    if (tp=="P" || tp=="p")
    {
    cout << " Nilai UAS Praktek                   : " ; cin>>uas6;
    cout << " % UAS Praktek                       : " ; cin>>psuas6;
    cout << " Nilai UTS Praktek                   : " ; cin>>uts6;
    cout << " % UTS Praktek                       : " ; cin>>puts6;
    cout << " Nilai Tugas Praktek                 : " ; cin>>tgs6;
    cout << " % Tugas Praktek                     : " ; cin>>ptgs6;
    }
    else
    {
    cout << " Nilai UAS Teori Praktek              : " ; cin>>uas6;
    cout << " % UAS Teori Praktek                  : " ; cin>>psuas6;
    cout << " Nilai UTS Teori Praktek              : " ; cin>>uts6;
    cout << " % UTS Teori Praktek                  : " ; cin>>puts6;
    cout << " Nilai Tugas Teori Praktek            : " ; cin>>tgs6;
    cout << " % Tugas Teori Praktek                : " ; cin>>ptgs6;
    }
    if (psuas6 + puts6 + ptgs6 !=100)
    {
    cout << "input % melebihi 100% tidak dapat terdeteksi, silahkan input kembali" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    }
    }while(psuas6 + puts6 + ptgs6 !=100);
    cout << "" << endl;


    cout << " Mata Kuliah ke-7 " << endl;
    cout << " Nama Mata Kuliah                    : "; cin.ignore();getline(cin, matkul7);
    cout << " SKS                                 : " ; cin>>sks7;
    cout << " T/P/TP (T:Teori, P:Praktek)         : " ; cin>>tp;
    do{
    if (tp=="T" || tp=="t")
    {
    cout << " Nilai UAS Teori                     : " ; cin>>uas7;
    cout << " % UAS Teori                         : " ; cin>>psuas7;
    cout << " Nilai UTS Teori                     : " ; cin>>uts7;
    cout << " % UTS Teori                         : " ; cin>>puts7;
    cout << " Nilai Tugas Teori                   : " ; cin>>tgs7;
    cout << " % Tugas Teori                       : " ; cin>>ptgs7;
    }
    else
    if (tp=="P" || tp=="p")
    {
    cout << " Nilai UAS Praktek                   : " ; cin>>uas7;
    cout << " % UAS Praktek                       : " ; cin>>psuas7;
    cout << " Nilai UTS Praktek                   : " ; cin>>uts7;
    cout << " % UTS Praktek                       : " ; cin>>puts7;
    cout << " Nilai Tugas Praktek                 : " ; cin>>tgs7;
    cout << " % Tugas Praktek                     : " ; cin>>ptgs7;
    }
    else
    {
    cout << " Nilai UAS Teori Praktek              : " ; cin>>uas7;
    cout << " % UAS Teori Praktek                  : " ; cin>>psuas7;
    cout << " Nilai UTS Teori Praktek              : " ; cin>>uts7;
    cout << " % UTS Teori Praktek                  : " ; cin>>puts7;
    cout << " Nilai Tugas Teori Praktek            : " ; cin>>tgs7;
    cout << " % Tugas Teori Praktek                : " ; cin>>ptgs7;
    }
    if (psuas7 + puts7 + ptgs7 !=100)
    {
    cout << "input % melebihi 100% tidak dapat terdeteksi, silahkan input kembali" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    }
    }while(psuas7 + puts7 + ptgs7 !=100);
    cout << "" << endl;

    system ("cls");
    cout << "" << endl;
    cout << "\t\t       KARTU HASIL STUDY     " << endl;
    cout << "\t\t   UNIVERSITAS DIAN NUSWANTORO " << endl;
    cout << "\t\t-----------------------------------" << endl;
    cout << " Nama   : " << nama << endl;
    cout << " NIM    : " << nim << endl;
    cout << " Prodi  : " << prodi << endl;
    cout << "-----------------------------------------" << endl;
    cout << " Matkul        : " << matkul1 << endl;
    cout << " SKS           : " << sks1 << endl;
    nilai1 = ((uas1*psuas1/100)+ (uts1*puts1/100)+ (tgs1* ptgs1/100));
    cout << " Nilai Akhir   : " << nilai1 << endl;
    cout << "-----------------------------------------" << endl;
    cout << " Matkul        : " << matkul2 << endl;
    cout << " SKS           : " << sks2 << endl;
    nilai2 = ((uas2*psuas2/100)+ (uts2*puts2/100)+ (tgs2* ptgs2/100));
    cout << " Nilai Akhir   : " << nilai2 << endl;
    cout << "-----------------------------------------" << endl;
    cout << " Matkul        : " << matkul3 << endl;
    cout << " SKS           : " << sks3 << endl;
    nilai3 = ((uas3*psuas3/100)+ (uts3*puts3/100)+ (tgs3* ptgs3/100));
    cout << " Nilai Akhir   : " << nilai3<< endl;
    cout << "-----------------------------------------" << endl;
    cout << " Matkul        : " << matkul4 << endl;
    cout << " SKS           : " << sks4 << endl;
    nilai4 = ((uas4*psuas4/100)+ (uts4*puts4/100)+ (tgs4* ptgs4/100));
    cout << " Nilai Akhir   : " << nilai4 << endl;
    cout << "-----------------------------------------" << endl;
    cout << " Matkul        : " << matkul5 << endl;
    cout << " SKS           : " << sks5 << endl;
    nilai5 = ((uas5*psuas5/100)+ (uts5*puts5/100)+ (tgs5* ptgs5/100));
    cout << " Nilai Akhir   : " << nilai5 << endl;
    cout << "-----------------------------------------" << endl;
    cout << " Matkul        : " << matkul6 << endl;
    cout << " SKS           : " << sks6 << endl;
    nilai6 = ((uas6*psuas6/100)+ (uts6*puts6/100)+ (tgs6* ptgs6/100));
    cout << " Nilai Akhir   : " << nilai6 << endl;
    cout << "-----------------------------------------" << endl;
    cout << " Matkul        : " << matkul7 << endl;
    cout << " SKS           : " << sks7 << endl;
    nilai7 = ((uas7*psuas7/100)+ (uts7*puts7/100)+ (tgs7* ptgs7/100));
    cout << " Nilai Akhir   : " << nilai7 << endl;
    cout << "-----------------------------------------" << endl;
    totalsks=(sks1+sks2+sks3+sks4+sks5+sks6+sks7);
    nilaiakhir=((nilai1+nilai2+nilai3+nilai4+nilai5+nilai6+nilai7)/7);
    cout << " Total SKS   : " << totalsks << endl;
    cout << " Nilai Akhir : " << nilaiakhir << endl;



    return 0;









}
