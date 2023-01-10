//judul
//latihan kondisi
//oleh nasya fauziah

#include <iostream>
using namespace std;

//kamus
int fak, prod;

//diskripsi
int main ()
{
    cout << "UDINUS" << endl;
    cout << "Pilihlah Fakultas dan Prodi sesuai nomor dibawah ini";
    cout << "1. FASILKOM" << endl;
    cout << "   1. TI" << endl;
    cout << "   2. SI" << endl;
    cout << "   3. DKV" << endl;
    cout << "   4. IK" << endl;
    cout << "2. FEB" << endl;
    cout << "   1. Manajemen" << endl;
    cout << "   2. Akuntasi" << endl;
    cout << "3. FIB" << endl;
    cout << "   1. Sastra Inggris" << endl;
    cout << "   2. Sastra Jepang" << endl;

    cout << "_______________________________________________________________"<< endl;
    cout << "Fakultas : ";
    cin >> fak;
    switch (fak)
    {
        case 1 :
        {
            cout << "FASILKOM" << endl;
            cout << "Prodi : ";
            cin>> prod;
            switch (prod)
                {
                    case 1:
                        {
                            cout << "TI" << endl ;
                            break;
                        }
                    case 2:
                        {
                            cout << "SI" << endl ;
                            break;
                        }
                    case 3:
                        {
                            cout << "DKV" << endl ;
                            break;
                        }
                    case 4:
                        {
                            cout << "IK" << endl ;
                            break;
                        }
                    default :
                        {
                            cout << "Lainnya" << endl ;
                            break;
                        }
                }
            break;
        }

         case 2 :
        {
            cout << "FEB" << endl;
            cout << "Prodi : ";
            cin >> prod;
            if (prod==1)
            {
                cout << "Akuntansi" << endl ;
            }
            else if (prod==2)
            {
                cout << "Manajemen"<< endl ;
            }
            else
            {
                cout << "Lainnya"<< endl ;
            }
            break;
        }
         case 3 :
        {
            cout << "FIB" << endl;
            cout << "Prodi : ";
            cin >> prod;
            switch (prod)
            {
                case 1:
                        {
                            cout << "Sastra Inggris"<< endl ;
                            break;
                        }
                case 2:
                        {
                            cout << "Sastra Jepang"<< endl;
                            break;
                        }
                default :
                        {
                            cout << "Lainnya" << endl;
                            break;
                        }

            }
            break;

        }
        default :
        {
            cout << "Kantin" << endl ;
            break;
        }
    }
     cout << "_______________________________________________________________"<< endl;

}
