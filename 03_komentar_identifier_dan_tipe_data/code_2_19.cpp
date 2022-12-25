#include <iostream>
#include <cstring>

using namespace std;

int main() {

    struct SISWA {
        char NIS[9];
        char Nama[25];
        char Alamat[20];
        char Kota[15];
    }; // bisa juga langsung dideklarasikan dengan variabel A menjadi } A;
       // atau multi variable menjadi } A, B, C;

SISWA A; // mendeklarasikan variabel A yang bertipe SISWA

strcpy(A.NIS, "10299999");
strcpy(A.Nama, "Bimo Haryo Hanggoro");
strcpy(A.Alamat, "Dago");
strcpy(A.Kota, "Bandung");

// menampilkan nilai yang diisikan ke layar
cout << A.NIS << endl;
cout << A.Nama << endl;
cout << A.Alamat << endl;
cout << A.Kota << endl;

return 0;
}
