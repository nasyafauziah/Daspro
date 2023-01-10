//judul
//mencoba input data sting (2)
//oleh nasya fauziah
//

#include <iostream>
using namespace std;

//kamus
string nama, alamat, no, email;

//diskripsi
main()
{
    cout << "MASUKKAN NAMA TEMAN ANDA : " ;
    getline (cin, nama);
    cout << "MASUKKAN ALAMATNYA : ";
    getline (cin, alamat);
    cout << "MASUKKAN NO HP NYA : ";
    getline (cin, no);
    cout << "MASUKKAN NAMA EMAILNYA : ";
    getline (cin, email);
    cout << "********************************************************************" << endl;
    cout << "Ow ternyata" << endl << "Beliau itu " << nama << " yang alamatnya " << alamat << endl;
    cout << "Beneran?" << endl << "Yang nomor Hp nya " << no << endl;
    cout << "Aku sering diberi berita keren lewat email " << email << endl;
    cout << "********************************************************************" << endl;

    return 0;
}



