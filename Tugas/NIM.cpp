//judul
//Mendeteksi prodi, fakultas, jenjang dari NIM
//oleh Nasya Fauziah

#include <iostream>
using namespace std;

//kamus
char nim[2] ; //nim=3variabel

//diskripsi
main()
{
    cout << "Menentukan Prodi, Fakultas, dan Jenjang Mahasiswa" << endl;
    cout << "=============================================================================================" << endl;
    cout << "Pilihlah Kode NIM dibawah ini : " << endl;
    cout << "1. A11" << endl;
    cout << "2. A21" << endl;
    cout << "3. B11" << endl;
    cout << "4. B21" << endl;
    cout << "=============================================================================================" << endl;
    cout << "Masukkan Kode NIM pilihan Anda : " ;
    cin >> nim;
    cout << "---------------------------------------------------------------------------------------------" << endl;


    switch (toupper(nim[0]))
    {
        case 'A':
        {
            cout << "---> Fakultas Ilmu Komputer" << endl;

            switch (nim[1])
                {
                case '1' :
                    {
                        cout << "---> S1" << endl;
                        switch (nim[2])
                        {
                            case '1' :
                                {
                                    cout << "---> Teknik Informatika" <<endl;
                                    cout << "---------------------------------------------------------------------------------------------" << endl;
                                    cout << "Jadi Kode NIM yang anda masukkan merupakan Mahasiswa Fakultas Ilmu Komputer, S1 Teknik Informatika" << endl;
                                    cout << "---------------------------------------------------------------------------------------------" << endl;
                                    break;
                                }
                            default :
                            {}
                        }
                    break;
                    }
                case '2' :
                    {
                        cout << "---> D3" << endl;
                        switch (nim[2])
                        {
                            case '1' :
                                {
                                    cout << "---> Teknik Informatika" <<endl;
                                    cout << "---------------------------------------------------------------------------------------------" << endl;
                                    cout << "Jadi Kode NIM yang anda masukkan merupakan Mahasiswa Fakultas Ilmu Komputer, D3 Teknik Informatika" << endl;
                                    cout << "---------------------------------------------------------------------------------------------" << endl;
                                    break;
                                }
                            default :
                            {}
                        }
                        break;
                 default :
                     {}
                    }

                }

        }
            break;

        case 'B' :
        {
            cout << "---> Fakultas Ekonomi Bisnis" << endl;

            switch (nim[1])
                {
                case '1' :
                    {
                        cout << "---> S1" << endl;
                        switch (nim[2])
                        {
                            case '1' :
                                {
                                    cout << "---> Manajemen" <<endl;
                                    cout << "---------------------------------------------------------------------------------------------" << endl;
                                    cout << "Jadi Kode NIM yang anda masukkan merupakan Mahasiswa Fakultas Ekonomi Bisnis, S1 Manajemen" << endl;
                                    cout << "---------------------------------------------------------------------------------------------" << endl;
                                    break;
                                }
                            default :
                            {}
                        }
                    break;
                    }
                case '2' :
                    {
                        cout << "---> D3" << endl;
                        switch (nim[2])
                        {
                            case '1' :
                                {
                                    cout << "---> Akuntansi" <<endl;
                                    cout << "---------------------------------------------------------------------------------------------" << endl;
                                    cout << "Jadi Kode NIM yang anda masukkan merupakan Mahasiswa Fakultas Ekonomi Bisnis, D3 Akuntansi" << endl;
                                    cout << "---------------------------------------------------------------------------------------------" << endl;
                                    break;
                                }
                            default :
                            {}
                        }
                        break;
                 default :
                     {}
                    }

                }



        }
    }

}

