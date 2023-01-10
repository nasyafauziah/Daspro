//judul
//menentukan urutan lebih besar menggunakan if else
//oleh Nasya Fauziah
//NIM A11.2022.14361

 #include <iostream>
 using namespace std;

 //kamus
 int a, b, c, d, e;

//diskripsi
main ()
{
    cout << "MENENTUKAN URUTAN DARI YANG TERBESAR" << endl;
    cout << "==============================================" << endl;
    cout << "                                                                   oleh : Nasya Fauziah" <<endl;
    cout << "                                                                     A11.2022.14361" <<endl;
    cout << "Masukkan a : ";
    cin >> a;
    cout << "Masukkan b : ";
    cin >> b;
    cout << "Masukkan c : ";
    cin >> c;
    cout << "Masukkan d : ";
    cin >> d;
    cout << "Masukkan e : ";
    cin >> e;
    cout << "==============================================" << endl;
    if (a>b && b>c && c>d && d>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, b, c, d, e" << " yang memiliki nilai " << a << ", " << b << ", " << c << ", "<< d << ", "<< e << endl;

    }
    else
    if (a>b && b>c && c>e && e>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, b, c, e, d" << " yang memiliki nilai " << a << ", " << b << ", " << c << ", "<< e << ", "<< d << endl;

    }
    else
    if (a>b && b>d && d>c && c>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, b, d, c, e" << " yang memiliki nilai " << a << ", " << b << ", " << d << ", "<< c << ", "<< e << endl;

    }
    else
    if (a>b && b>d && d>e && e>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, b, d, e, c" << " yang memiliki nilai " << a << ", " << b << ", " << d << ", "<< e << ", "<< c << endl;

    }
    else
    if (a>b && b>e && e>c && c>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, b, e, c, d" << " yang memiliki nilai " << a << ", " << b << ", " << e << ", "<< c << ", "<< d << endl;

    }
    else
    if (a>b && b>e && e>d && d>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, b, e, d, c" << " yang memiliki nilai " << a << ", " << b << ", " << e << ", "<< d << ", "<< c << endl;

    }
    else
    if (a>c && c>b && b>d && d>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, c, b, d, e" << " yang memiliki nilai " << a << ", " << c << ", " << b << ", "<< d << ", "<< e << endl;

    }
    else
    if (a>c && c>b && b>e && e>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, c, b, e, d" << " yang memiliki nilai " << a << ", " << c << ", " << b << ", "<< e << ", "<< d << endl;

    }
    else
    if (a>c && c>d && d>b && b>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, c, d, b, e" << " yang memiliki nilai " << a << ", " << c << ", " << d << ", "<< b << ", "<< e << endl;

    }
    else
    if (a>c && c>d && d>e && e>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, c, d, e, b" << " yang memiliki nilai " << a << ", " << c << ", " << d << ", "<< e << ", "<< b << endl;

    }
    else
    if (a>c && c>e && e>b && b>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, c, e, b, d" << " yang memiliki nilai " << a << ", " << c << ", " << e << ", "<< b << ", "<< d << endl;

    }
    else
    if (a>c && c>e && e>d && d>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, c, e, d, b" << " yang memiliki nilai " << a << ", " << c << ", " << e << ", "<< d << ", "<< b << endl;

    }
    else
    if (a>d && d>b && b>c && c>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, d, b, c, e" << " yang memiliki nilai " << a << ", " << d << ", " << b << ", "<< c << ", "<< e << endl;

    }
    else
    if (a>d && d>b && b>e && e>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, d, b, e, c" << " yang memiliki nilai " << a << ", " << d << ", " << b << ", "<< e << ", "<< c << endl;

    }
    else
    if (a>d && d>c && c>b && b>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, d, c, b, e" << " yang memiliki nilai " << a << ", " << d << ", " << c << ", "<< b << ", "<< e << endl;

    }
    else
    if (a>d && d>c && c>e && e>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, d, c, e, b" << " yang memiliki nilai " << a << ", " << d << ", " << c << ", "<< e << ", "<< b << endl;

    }
    else
    if (a>d && d>e && e>b && b>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, d, e, b, c" << " yang memiliki nilai " << a << ", " << d << ", " << e << ", "<< b << ", "<< c << endl;

    }
    else
    if (a>d && d>e && e>c && c>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, d, e, c, b" << " yang memiliki nilai " << a << ", " << d << ", " << e << ", "<< c << ", "<< b << endl;

    }
    else
    if (a>e && e>b && b>c && c>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, e, b, c, d" << " yang memiliki nilai " << a << ", " << e << ", " << b << ", "<< c << ", "<< d << endl;

    }
    else
    if (a>e && e>b && b>d && d>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, e, b, d, c" << " yang memiliki nilai " << a << ", " << e << ", " << b << ", "<< d << ", "<< c << endl;

    }
    else
    if (a>e && e>c && c>b && b>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, e, c, b, d" << " yang memiliki nilai " << a << ", " << e << ", " << c << ", "<< b << ", "<< d << endl;

    }
    else
    if (a>e && e>c && c>d && d>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, e, c, d, b" << " yang memiliki nilai " << a << ", " << e << ", " << c << ", "<< d << ", "<< b << endl;

    }
    else
    if (a>e && e>d && d>b && b>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, e, d, b, c" << " yang memiliki nilai " << a << ", " << e << ", " << d << ", "<< b << ", "<< c << endl;

    }
    else
    if (a>e && e>d && d>c && c>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "a, e, d, c, b" << " yang memiliki nilai " << a << ", " << e << ", " << d << ", "<< c << ", "<< b << endl;

    }
    else
    if (b>a && a>c && c>d && d>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, a, c, d, e" << " yang memiliki nilai " << b << ", " << a << ", " << c << ", "<< d << ", "<< e << endl;

    }
    else
    if (b>a && a>c && c>e && e>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, a, c, e, d" << " yang memiliki nilai " << b << ", " << a << ", " << c << ", "<< e << ", "<< d << endl;

    }
    else
    if (b>a && a>d && d>c && c>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, a, d, c, e" << " yang memiliki nilai " << b << ", " << a << ", " << d << ", "<< c << ", "<< e << endl;

    }
    else
    if (b>a && a>d && d>e && e>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, a, d, e, c" << " yang memiliki nilai " << b << ", " << a << ", " << d << ", "<< e << ", "<< c << endl;

    }
    else
    if (b>a && a>e && e>c && c>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, a, e, c, d" << " yang memiliki nilai " << b << ", " << a << ", " << e << ", "<< c << ", "<< d << endl;

    }
    else
    if (b>a && a>e && e>d && d>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, a, e, d, c" << " yang memiliki nilai " << b << ", " << a << ", " << e << ", "<< d << ", "<< c << endl;

    }
    else
    if (b>c && c>a && a>d && d>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, c, a, d, e" << " yang memiliki nilai " << b << ", " << c << ", " << a << ", "<< d << ", "<< e << endl;

    }
    else
    if (b>a && a>c && c>d && d>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, a, c, d, e" << " yang memiliki nilai " << b << ", " << a << ", " << c << ", "<< d << ", "<< e << endl;

    }
    else
    if (b>c && c>a && a>e && e>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, c, a, e, d" << " yang memiliki nilai " << b << ", " << c << ", " << a << ", "<< e << ", "<< d << endl;

    }
    else
    if (b>c && c>d && d>a && a>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, c, d, a, e" << " yang memiliki nilai " << b << ", " << c << ", " << d << ", "<< a << ", "<< e << endl;

    }
    else
    if (b>c && c>d && d>e && e>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, c, d, e, a" << " yang memiliki nilai " << b << ", " << c << ", " << d << ", "<< e << ", "<< a << endl;

    }
    else
    if (b>c && c>e && e>a && a>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, c, e, a, d" << " yang memiliki nilai " << b << ", " << c << ", " << e << ", "<< a << ", "<< d << endl;

    }
    else
    if (b>c && c>e && e>d && d>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, c, e, d, a" << " yang memiliki nilai " << b << ", " << c << ", " << e << ", "<< d << ", "<< a << endl;

    }
    else
     if (b>d && d>a && a>c && c>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, d, a, c, e" << " yang memiliki nilai " << b << ", " << d << ", " << a << ", "<< c << ", "<< e << endl;

    }
    else
     if (b>d && d>a && a>e && e>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, d, a, e, c" << " yang memiliki nilai " << b << ", " << d << ", " << a << ", "<< e << ", "<< c << endl;

    }
    else
     if (b>d && d>c && c>a && a>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, d, c, a, e" << " yang memiliki nilai " << b << ", " << d << ", " << c << ", "<< a << ", "<< e << endl;

    }
    else
    if (b>d && d>c && c>e && e>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, d, c, e, a" << " yang memiliki nilai " << b << ", " << d << ", " << c << ", "<< e << ", "<< a << endl;

    }
    else
    if (b>d && d>e && e>a && a>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, d, e, a, c" << " yang memiliki nilai " << b << ", " << d << ", " << e << ", "<< a << ", "<< c << endl;

    }
    else
     if (b>d && d>e && e>c && c>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, d, e, c, a" << " yang memiliki nilai " << b << ", " << d << ", " << e << ", "<< c << ", "<< a << endl;

    }
    else
     if (b>e && e>a && a>c && c>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, e, a, c, d" << " yang memiliki nilai " << b << ", " << e << ", " << a << ", "<< c << ", "<< d << endl;

    }
    else
     if (b>e && e>a && a>d && d>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, e, a, d, c" << " yang memiliki nilai " << b << ", " << e << ", " << a << ", "<< d << ", "<< c << endl;

    }
    else
     if (b>e && e>c && c>a && a>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, e, c, a, d" << " yang memiliki nilai " << b << ", " << e << ", " << c << ", "<< a << ", "<< d << endl;

    }
    else
     if (b>e && e>c && c>d && d>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, e, c, d, a" << " yang memiliki nilai " << b << ", " << e << ", " << c << ", "<< d << ", "<< a << endl;

    }
    else
     if (b>e && e>d && d>a && a>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, e, d, a, c" << " yang memiliki nilai " << b << ", " << e << ", " << d << ", "<< a << ", "<< c << endl;

    }
    else
     if (b>e && e>d && d>c && c>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "b, e, d, c, a" << " yang memiliki nilai " << b << ", " << e << ", " << d << ", "<< c << ", "<< a << endl;

    }
    else
    if (c>a && a>b && b>d && d>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, a, b, d, e" << " yang memiliki nilai " << c << ", " << a << ", " << b << ", "<< d << ", "<< e << endl;

    }
    else
    if (c>a && a>b && b>e && e>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, a, b, e, d" << " yang memiliki nilai " << c << ", " << a << ", " << b << ", "<< e << ", "<< d << endl;

    }
    else
    if (c>a && a>d && d>b && b>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, a, d, b, e" << " yang memiliki nilai " << c << ", " << a << ", " << d << ", "<< b << ", "<< e << endl;

    }
    else
    if (c>a && a>d && d>e && e>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, a, d, e, b" << " yang memiliki nilai " << c << ", " << a << ", " << d << ", "<< e << ", "<< b << endl;

    }
    else
    if (c>a && a>e && e>b && b>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, a, e, b, d" << " yang memiliki nilai " << c << ", " << a << ", " << e << ", "<< b << ", "<< d << endl;

    }
    else
    if (c>a && a>e && e>d && d>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, a, e, d, b" << " yang memiliki nilai " << c << ", " << a << ", " << e << ", "<< d << ", "<< b << endl;

    }
    else
    if (c>b && b>a && a>d && d>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, b, a, d, e" << " yang memiliki nilai " << c << ", " << b << ", " << a << ", "<< d << ", "<< e << endl;

    }
    else
    if (c>b && b>a && a>e && e>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, b, a, e, d" << " yang memiliki nilai " << c << ", " << b << ", " << a << ", "<< e << ", "<< d << endl;

    }
    else
    if (c>b && b>d && d>a && a>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, b, d, a, e" << " yang memiliki nilai " << c << ", " << b << ", " << d << ", "<< a << ", "<< e << endl;

    }
    else
    if (c>b && b>d && d>e && e>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, b, d, e, a" << " yang memiliki nilai " << c << ", " << b << ", " << d << ", "<< e << ", "<< a << endl;

    }
    else
    if (c>b && b>e && e>a && a>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, b, e, a, d" << " yang memiliki nilai " << c << ", " << b << ", " << e << ", "<< a << ", "<< d << endl;

    }
    else
    if (c>b && b>e && e>d && d>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, b, e, d, a" << " yang memiliki nilai " << c << ", " << b << ", " << e << ", "<< d << ", "<< a << endl;

    }
    else
    if (c>d && d>a && a>b && b>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, d, a, b, e" << " yang memiliki nilai " << c << ", " << d << ", " << a << ", "<< b << ", "<< e << endl;

    }
    else
    if (c>d && d>a && a>e && e>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, d, a, e, b" << " yang memiliki nilai " << c << ", " << d << ", " << a << ", "<< e << ", "<< b << endl;

    }
    else
    if (c>d && d>b && b>e && e>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, d, b, e, a" << " yang memiliki nilai " << c << ", " << d << ", " << b << ", "<< e << ", "<< a << endl;

    }
    else
    if (c>d && d>e && e>a && a>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, d, e, a, b" << " yang memiliki nilai " << c << ", " << d << ", " << e << ", "<< a << ", "<< b << endl;

    }
    else
    if (c>d && d>e && e>b && b>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, d, e, b, a" << " yang memiliki nilai " << c << ", " << d << ", " << e << ", "<< b << ", "<< a << endl;

    }
    else
    if (c>e && e>a && a>b && b>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, e, a, b, d" << " yang memiliki nilai " << c << ", " << e << ", " << a << ", "<< b << ", "<< d << endl;

    }
    else
    if (c>e && e>a && a>d && d>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, e, a, d, b" << " yang memiliki nilai " << c << ", " << e << ", " << a << ", "<< d << ", "<< b << endl;

    }
    else
    if (c>e && e>b && b>a && a>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, e, b, a, d" << " yang memiliki nilai " << c << ", " << e << ", " << b << ", "<< a << ", "<< d << endl;

    }
    else
    if (c>e && e>b && b>d && d>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, e, b, d, a" << " yang memiliki nilai " << c << ", " << e << ", " << b << ", "<< d << ", "<< a << endl;

    }
    else
    if (c>e && e>d && d>a && a>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, e, d, a, b" << " yang memiliki nilai " << c << ", " << e << ", " << d << ", "<< a << ", "<< b << endl;

    }
    else
    if (c>e && e>d && d>b && b>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "c, e, d, b, a" << " yang memiliki nilai " << c << ", " << e << ", " << d << ", "<< b << ", "<< a << endl;

    }
    else
    if (d>a && a>b && b>c && c>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, a, b, c, e" << " yang memiliki nilai " << d << ", " << a << ", " << b << ", "<< c << ", "<< e << endl;

    }
    else
    if (d>a && a>b && b>e && e>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, a, b, e, c" << " yang memiliki nilai " << d << ", " << a << ", " << b << ", "<< e << ", "<< c << endl;

    }
    else
    if (d>a && a>c && c>b && b>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, a, c, b, e" << " yang memiliki nilai " << d << ", " << a << ", " << c << ", "<< b << ", "<< e << endl;

    }
    else
    if (d>a && a>c && c>e && e>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, a, c, e, b" << " yang memiliki nilai " << d << ", " << a << ", " << c << ", "<< e << ", "<< b << endl;

    }
    else
    if (d>a && a>e && e>b && b>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, a, e, b, c" << " yang memiliki nilai " << d << ", " << a << ", " << e << ", "<< b << ", "<< c << endl;

    }
    else
    if (d>a && a>e && e>c && c>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, a, e, c, b" << " yang memiliki nilai " << d << ", " << a << ", " << e << ", "<< c << ", "<< b << endl;

    }
    else
    if (d>b && b>a && a>c && c>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, b, a, c, e" << " yang memiliki nilai " << d << ", " << b << ", " << a << ", "<< c << ", "<< e << endl;

    }
    else
    if (d>b && b>a && a>e && e>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, b, a, e, c" << " yang memiliki nilai " << d << ", " << b << ", " << a << ", "<< e << ", "<< c << endl;

    }
    else
    if (d>b && b>c && c>a && a>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, b, c, a, e" << " yang memiliki nilai " << d << ", " << b << ", " << c << ", "<< a << ", "<< e << endl;

    }
    else
    if (d>b && b>c && c>e && e>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, b, c, e, a" << " yang memiliki nilai " << d << ", " << b << ", " << c << ", "<< e << ", "<< a << endl;

    }
    else
    if (d>b && b>e && e>a && a>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, b, e, a, c" << " yang memiliki nilai " << d << ", " << b << ", " << e << ", "<< a << ", "<< c << endl;

    }
    else
    if (d>b && b>e && e>c && c>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, b, e, c, a" << " yang memiliki nilai " << d << ", " << b << ", " << e << ", "<< c << ", "<< a << endl;

    }
    else
    if (d>c && c>a && a>b && b>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, c, a, b, e" << " yang memiliki nilai " << d << ", " << c << ", " << a << ", "<< b << ", "<< e << endl;

    }
    else
    if (d>c && c>a && a>e && e>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, c, a, e, b" << " yang memiliki nilai " << d << ", " << c << ", " << a << ", "<< e << ", "<< b << endl;

    }
    else
    if (d>c && c>b && b>a && a>e)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, c, b, a, e" << " yang memiliki nilai " << d << ", " << c << ", " << b << ", "<< a << ", "<< e << endl;

    }
    else
    if (d>c && c>b && b>e && e>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, c, b, e, a" << " yang memiliki nilai " << d << ", " << c << ", " << b << ", "<< e << ", "<< a << endl;

    }
    else
    if (d>c && c>e && e>a && a>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, c, e, a, b" << " yang memiliki nilai " << d << ", " << c << ", " << e << ", "<< a << ", "<< b << endl;

    }
    else
    if (d>c && c>e && e>b && b>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, c, e, b, a" << " yang memiliki nilai " << d << ", " << c << ", " << e << ", "<< b << ", "<< a << endl;

    }
    else
    if (d>e && e>a && a>b && b>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, e, a, b, c" << " yang memiliki nilai " << d << ", " << e << ", " << a << ", "<< b << ", "<< c << endl;

    }
    else
    if (d>e && e>a && a>c && c>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, e, a, c, b" << " yang memiliki nilai " << d << ", " << e << ", " << a << ", "<< c << ", "<< b << endl;

    }
    else
    if (d>e && e>b && b>a && a>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, e, b, a, c" << " yang memiliki nilai " << d << ", " << e << ", " << b << ", "<< a << ", "<< c << endl;

    }
    else
    if (d>e && e>b && b>a && a>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, e, b, a, c" << " yang memiliki nilai " << d << ", " << e << ", " << b << ", "<< a << ", "<< c << endl;

    }
    else
    if (d>e && e>b && b>c && c>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, e, b, c, a" << " yang memiliki nilai " << d << ", " << e << ", " << b << ", "<< c << ", "<< a << endl;

    }
    else
    if (d>e && e>c && c>a && a>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, e, c, a, b" << " yang memiliki nilai " << d << ", " << e << ", " << c << ", "<< a << ", "<< b << endl;

    }
    else
    if (d>e && e>c && c>b && b>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "d, e, c, b, a" << " yang memiliki nilai " << d << ", " << e << ", " << c << ", "<< b << ", "<< a << endl;

    }
    else
    if (e>a && a>b && b>c && c>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, a, b, c, d" << " yang memiliki nilai " << e << ", " << a << ", " << b << ", "<< c << ", "<< d << endl;

    }
    else
    if (e>a && a>b && b>c && c>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, a, b, c, d" << " yang memiliki nilai " << e << ", " << a << ", " << b << ", "<< c << ", "<< d << endl;

    }
    else
    if (e>a && a>b && b>d && d>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, a, b, d, c" << " yang memiliki nilai " << e << ", " << a << ", " << b << ", "<< d << ", "<< c << endl;

    }
    else
    if (e>a && a>c && c>b && b>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, a, c, b, d" << " yang memiliki nilai " << e << ", " << a << ", " << c << ", "<< b << ", "<< d << endl;

    }
    else
    if (e>a && a>c && c>d && d>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, a, c, d, b" << " yang memiliki nilai " << e << ", " << a << ", " << c << ", "<< d << ", "<< b << endl;

    }
    else
    if (e>a && a>d && d>b && b>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, a, d, b, c" << " yang memiliki nilai " << e << ", " << a << ", " << d << ", "<< b << ", "<< c << endl;

    }
    else
    if (e>a && a>d && d>c && c>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, a, d, c, b" << " yang memiliki nilai " << e << ", " << a << ", " << d << ", "<< c << ", "<< b << endl;

    }
    else
    if (e>b && b>a && a>c && c>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, b, a, c, d" << " yang memiliki nilai " << e << ", " << b << ", " << a << ", "<< c << ", "<< d << endl;

    }
    else
    if (e>b && b>a && a>d && d>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, b, a, d, c" << " yang memiliki nilai " << e << ", " << b << ", " << a << ", "<< d << ", "<< c << endl;

    }
    else
    if (e>b && b>c && c>a && a>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, b, c, a, d" << " yang memiliki nilai " << e << ", " << b << ", " << c << ", "<< a << ", "<< d << endl;

    }
    else
    if (e>b && b>c && c>d && d>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, b, c, d, a" << " yang memiliki nilai " << e << ", " << b << ", " << c << ", "<< d << ", "<< a << endl;

    }
    else
    if (e>b && b>d && d>a && a>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, b, d, a, c" << " yang memiliki nilai " << e << ", " << b << ", " << d << ", "<< a << ", "<< c << endl;

    }
    else
    if (e>b && b>d && d>c && c>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, b, d, c, a" << " yang memiliki nilai " << e << ", " << b << ", " << d << ", "<< c << ", "<< a << endl;

    }
    else
    if (e>c && c>a && a>b && b>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, c, a, b, d" << " yang memiliki nilai " << e << ", " << c << ", " << a << ", "<< b << ", "<< d << endl;

    }
    else
    if (e>c && c>a && a>d && d>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, c, a, d, b" << " yang memiliki nilai " << e << ", " << c << ", " << a << ", "<< d << ", "<< b << endl;

    }
    else
    if (e>c && c>b && b>a && a>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, c, b, a, d" << " yang memiliki nilai " << e << ", " << c << ", " << b << ", "<< a << ", "<< d << endl;

    }
    else
    if (e>c && c>b && b>d && d>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, c, b, d, a" << " yang memiliki nilai " << e << ", " << c << ", " << b << ", "<< d << ", "<< a << endl;

    }
    else
    if (e>c && c>d && d>a && a>d)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, c, d, a, b" << " yang memiliki nilai " << e << ", " << c << ", " << d << ", "<< a << ", "<< b << endl;

    }
    else
    if (e>c && c>d && d>b && b>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, c, d, b, a" << " yang memiliki nilai " << e << ", " << c << ", " << d << ", "<< b << ", "<< a << endl;

    }
    else
    if (e>d && d>a && a>b && b>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, d, a, b, c" << " yang memiliki nilai " << e << ", " << d << ", " << a << ", "<< b << ", "<< c << endl;

    }
    else
     if (e>d && d>a && a>c && c>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, d, a, c, b" << " yang memiliki nilai " << e << ", " << d << ", " << a << ", "<< c << ", "<< b << endl;

    }
    else
    if (e>d && d>a && a>b && b>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, d, a, b, c" << " yang memiliki nilai " << e << ", " << d << ", " << a << ", "<< b << ", "<< c << endl;

    }
    else
    if (e>d && d>b && b>a && a>c)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, d, b, a, c" << " yang memiliki nilai " << e << ", " << d << ", " << b << ", "<< a << ", "<< c << endl;

    }
    else
    if (e>d && d>b && b>c && c>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, d, b, c, a" << " yang memiliki nilai " << e << ", " << d << ", " << b << ", "<< c << ", "<< a << endl;

    }
    else
    if (e>d && d>c && c>a && a>b)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, d, c, a, b" << " yang memiliki nilai " << e << ", " << d << ", " << c << ", "<< a << ", "<< b << endl;

    }
    else
    if (e>d && d>c && c>b && b>a)
    {
        cout << "Maka urutan dari yang terbesar adalah " << "e, d, c, b, a" << " yang memiliki nilai " << e << ", " << d << ", " << c << ", "<< b << ", "<< a << endl;

    }
    else
    {}

}
