//judul
//menganalisis penyakit melalui gejala-gejalanya
//oleh Nasya Fauziah
//revisi ketiga

#include <iostream>
using namespace std;

//kamus
char gppr, gpkd, pil;
// gppr:gejala penyakit pertama, gpkd:gejala penyakit kedua, pil=pilihan
string gpkt;
// gpkt : gejala penyakit ketiga

////diskripsi
int main()
{
do
{
    system ("cls");
   cout << "Mendeteksi Penyakit Melalui Gejala " << endl;
   cout << "-----------------------------------------" << endl;
   cout << "Gejala Pertama : " << endl;
   cout << "a. Pusing/Nyeri kepala" << endl;
   cout << "b. Demam" << endl;
   cout << "c. Lemas" << endl;
   cout << "Pilih dan masukkan gejala diatas (a-c) : ";
   cin >> gppr;
   switch (gppr)
   {
        case 'a' :
            {
                system ("cls");
                cout << "Dari gejala pertama yang anda pilih, maka pilihlah gejala kedua dibawah ini" << endl;
                cout << "a. Sakit Perut" << endl;
                cout << "b. Mual/Muntah" << endl;
                cout << "Masukkan pilihan anda (a/b) : " ;
                cin >> gpkd;

                    switch (gpkd)
                    {
                        case 'a' :
                            {
                                system ("cls");
                                cout << "Dari gejala kedua yang anda pilih, maka pilihlah gejala ketiga dibawah ini" << endl;
                                cout << "a. Sakit Perut Diare, BAB berdarah" << endl;
                                cout << "b. Sakit Perut pada bagian ulu hati" << endl;
                                cout << "Masukkan pilihan anda (a/b) : " ;
                                cin >> gpkt;
                                    if (gpkt=="a")
                                    {
                                         system ("cls");
                                        cout << "Dari gejala-gejala yang anda Masukkan, penyakit yang anda derita adalah Malaria" << endl;
                                    }
                                    else
                                    if (gpkt=="b")
                                    {
                                         system ("cls");
                                        cout << "Dari gejala-gejala yang anda Masukkan, penyakit yang anda derita adalah Typus" << endl;
                                    }
                                    else
                                    {}

                                break;
                            }
                         case 'b' :
                            {
                               system ("cls");
                                cout << "Dari gejala kedua yang anda pilih, maka pilihlah gejala ketiga dibawah ini" << endl;
                                cout << "a. Mual saat dan sesudah makan" << endl;
                                cout << "b. Mual karena Perut terasa kembung" << endl;
                                cout << "c. Mual disertai Telinga Berasa Berdengung" << endl;
                                cout << "Masukkan pilihan anda (a-c) : ";
                                cin >> gpkt;
                                    if (gpkt=="a")
                                    {
                                        system ("cls");
                                        cout << "Dari gejala-gejala yang anda Masukkan, penyakit yang anda derita adalah Maag" << endl;
                                    }
                                    else
                                    if (gpkt=="b")
                                    {
                                        system ("cls");
                                        cout << "Dari gejala-gejala yang anda Masukkan, penyakit yang anda derita adalah Masuk angin" << endl;
                                    }
                                    else
                                    if (gpkt=="c")
                                    {
                                        system ("cls");
                                        cout << "Dari gejala-gejala yang anda Masukkan, penyakit yang anda derita adalah Vertigo" << endl;
                                    }
                                    else
                                    {}

                                break;
                            }
                        default :
                            {
                            break;
                            }
                    break;
                    }
                break;
            }
        case 'b' :
            {
                system ("cls");
                cout << "Dari gejala pertama yang anda pilih, maka pilihlah gejala kedua dibawah ini" << endl;
                cout << "a. Demam disertai Nyeri Tenggorokan" << endl;
                cout << "b. Demam disertai Nyeri otot/ Pegal-pegal" << endl;
                cout << "c. Demam beberapa hari" << endl;
                cout << "Masukkan pilihan anda (a-c) : " ;
                cin >> gpkd;
                    switch (gpkd)
                    {
                        case 'a' :
                            {
                                system ("cls");
                                cout << "Dari gejala kedua yang anda pilih, maka pilihlah gejala ketiga dibawah ini" << endl;
                                cout << "a. Warna kebiruan pada kulit akibat kurangnya oksigen." << endl;
                                cout << "b. Pembengkakan kelenjar getah bening di leher" << endl;
                                cout << "Masukkan pilihan anda (a/b) : " ;
                                cin >> gpkt;
                                    if (gpkt=="a")
                                    {
                                        system ("cls");
                                        cout << "Dari gejala-gejala yang anda Masukkan, penyakit yang anda derita adalah ISPA" << endl;
                                    }
                                    else
                                    if (gpkt=="b")
                                    {
                                        system ("cls");
                                        cout << "Dari gejala-gejala yang anda Masukkan, penyakit yang anda derita adalah Radang Amandel" << endl;
                                    }
                                    else
                                    {}

                                break;
                            }
                        case 'b' :
                            {
                               system ("cls");
                                cout << "Dari gejala kedua yang anda pilih, maka pilihlah gejala ketiga dibawah ini" << endl;
                                cout << "a. Nyeri otot disertai ruam kulit" << endl;
                                cout << "b. BAB Berdarah" << endl;
                                cout << "Masukkan pilihan anda (a/b) : ";
                                cin >> gpkt;
                                    if (gpkt=="a")
                                    {
                                        system ("cls");
                                        cout << "Dari gejala-gejala yang anda Masukkan, penyakit yang anda derita adalah Chikungunya" << endl;
                                    }
                                    else
                                    if (gpkt=="b")
                                    {
                                        system ("cls");
                                        cout << "Dari gejala-gejala yang anda Masukkan, penyakit yang anda derita adalah Malaria" << endl;
                                    }
                                    else
                                    {}

                                break;
                            }
                        case 'c' :
                            {
                               system ("cls");
                                cout << "Dari gejala kedua yang anda pilih, maka pilihlah gejala ketiga dibawah ini" << endl;
                                cout << "a. Terjadi penurunan trombosit " << endl;
                                cout << "b. mata menguning, tinja pucat" << endl;
                                cout << "Masukkan pilihan anda (a/b) : ";
                                cin >> gpkt;
                                    if (gpkt=="a")
                                    {
                                        system ("cls");
                                        cout << "Dari gejala-gejala yang anda Masukkan, penyakit yang anda derita adalah DBD" << endl;
                                    }
                                    else
                                    if (gpkt=="b")
                                    {
                                        system ("cls");
                                        cout << "Dari gejala-gejala yang anda Masukkan, penyakit yang anda derita adalah Hepatitis" << endl;
                                    }
                                    else
                                    {}

                                break;
                                default :
                            {
                            break;
                            }
                    break;
                    }
                break;
                            }

                break;
            }
        case 'c' :
            {
                system ("cls");
                cout << "Dari gejala pertama yang anda pilih, maka pilihlah gejala kedua dibawah ini" << endl;
                cout << "a. Sering Mengantuk " << endl;
                cout << "b. Nyeri Dada" << endl;
                cout << "Masukkan pilihan anda (a/b) : ";
                cin >> gpkd;
                switch (gpkd)
                    {
                        case 'a' :
                            {
                                system ("cls");
                                cout << "Dari gejala kedua yang anda pilih, maka pilihlah gejala ketiga dibawah ini" << endl;
                                cout << "a. Tidak fokus saat mengerjakan sesuatu" << endl;
                                cout << "b. Kulit terlihat pucat atau kekuningan." << endl;
                                cout << "Masukkan pilihan anda (a/b) : " ;
                                cin >> gpkt;
                                    if (gpkt=="a")
                                    {
                                        system ("cls");
                                        cout << "Dari gejala-gejala yang anda Masukkan, penyakit yang anda derita adalah kelelahan/kurang tidur" << endl;
                                    }
                                    else
                                    if (gpkt=="b")
                                    {
                                        system ("cls");
                                        cout << "Dari gejala-gejala yang anda Masukkan, penyakit yang anda derita adalah Anemia" << endl;
                                    }
                                    else
                                    {}

                                break;
                            }
                        case 'b' :
                            {
                               system ("cls");
                                cout << "Dari gejala kedua yang anda pilih, maka pilihlah gejala ketiga dibawah ini" << endl;
                                cout << "a. Nafas Berat" << endl;
                                cout << "b. Batu kering terasa pahit" << endl;
                                cout << "Masukkan pilihan anda (a/b) : " ;
                                cin >> gpkt;
                                    if (gpkt=="a")
                                    {
                                        system ("cls");
                                        cout << "Dari gejala-gejala yang anda Masukkan, diagnosa penyakit yang anda derita adalah Jantung" << endl;
                                    }
                                    else
                                    if (gpkt=="b")
                                    {
                                        system ("cls");
                                        cout << "Dari gejala-gejala yang anda Masukkan, diagnosa penyakit yang anda derita adalah gastrofagus" << endl;
                                    }
                                    else
                                    {}
                            break;
                            }
                            default :
                            {
                            break;
                            }
                    break;
                    }
                break;
                break;
            }
        default :
            {
                cout << "Gejala penyakit tidak terdeteksi" << endl;
                break;
            }

    }
            cout <<""<<endl;
            cout <<"============================================================================================"<<endl;
            cout <<"Apakah Anda Ingin Mengulang Kembali?"<<endl;
            cout <<"Jawab (Y/T) : "; cin>>pil;

}
            while (pil=='y'|| pil=='Y');
            cout <<"Anda Tidak Ingin Mengulang" <<endl;


cout << "---------------------------------------------------------------------------------------------------------"<< endl;
return 0;
}
