/* PROGRAM MENGHITUNG LUAS LNGKARAN */
/* DESKRIPSI PROGRAM => MEMBACA JARI-JARI LINGKARAN (r),
Menghitung Lluas Lingkaran (L), Kemudian Mencetak Luas Lingkaran */

#include <iostream>

using namespace std;

int main()
{
    /* Deklarasi Awal */
   float pi= 3.14;                      /*konstata nilai pi*/
   float r;                         /* Jari-Jari Lingkaran*/
   float L;                         /* Luas lingkaran*/

   /*ALGORITMA*/
    cout << "Masukkan Jari-Jari Lingkaran (r) :\n";cin >> r;   /*tampilan r*/
    L = pi * r * r;
    cout << "Luas Lingkaaran dengan Jari-Jari (r)"<<r<<"adalah:"<<L;
    return 0;
}
