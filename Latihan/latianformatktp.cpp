//judul
// mencoba membuat format ktp
// oleh nasya fauziah

#include <iostream>
using namespace std;

//kamus
string NIK, nama,ttl, jk, alamat, rt, rw, desa, kecamatan, agama, sp, pekerjaan, kewarganegaraan, gd;
// ttl=tempat tanggal lahir, sp=status perkawinan, gd = golongan darah

main ()
{
    cout << "Masukkan Data Sesuai di KTP" << endl;
    cout <<"NIK :";
    getline (cin, NIK);
    cout << "Nama : ";
    getline (cin, nama);
    cout << "Tempat, tanggal lahir : ";
    getline (cin, ttl);
    cout << "Jenis Kelamin : ";
    getline (cin, jk);
    cout << "Alamat : ";
    getline (cin, alamat);
    cout << "Rt : ";
    getline  (cin, rt);
    cout << "Rw : ";
    getline (cin, rw);
    cout << "desa : ";
    getline (cin, desa);
    cout << "Kecamatan : ";
    getline (cin, kecamatan);
    cout << "Agama : ";
    getline (cin, kecamatan);
    cout << "Status Perkawinan : ";
    getline (cin, sp);
    cout << "Pekerjaan : ";
    getline (cin, pekerjaan);
    cout << "Kewarganegaraan : ";
    getline (cin, kewarganegaraan);
    cout << "Golongan Darah : ";
    getline (cin, gd);
    cout << "____________________________________________________________________________________"<< endl;
    cout << "                                PROVINSI JAWA TENGAH                    " << endl;
    cout << "                                  KABUPATEN JEPARA                      " << endl;
    cout << "                                                                   " << endl ;
    cout << " NIK               : " << NIK << endl;
    cout << " Nama              : " << nama << endl;
    cout << " Tempat/Tgl Lahir  : " << ttl << endl;
    cout << " Jenis Kelamin     : " << jk << "                  Gol.Darah   : " << gd << endl;
    cout << " Alamat            : " << alamat << endl;
    cout << "      RT/RW        : " << rt << "/" << rw << endl;
    cout << "      Kel/Desa     : " << desa << endl;
    cout << "      Kecamatan    : " << kecamatan << endl;
    cout << " Agama             : " << agama << endl;
    cout << " Status Perkawinan : " << sp << endl;
    cout << " Pekerjaan         : " << pekerjaan << endl;
    cout << " Kewarganegaraan   : " << kewarganegaraan << endl;
    cout << " Berlaku hingga    : SEUMUR HIDUP " << endl;
    cout << "____________________________________________________________________________________"<< endl;

    return 0;

}
