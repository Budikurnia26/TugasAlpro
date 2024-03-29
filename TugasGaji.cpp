#include <iostream>
#include <string>
using namespace std;

class Pegawai {
public:
    string nama;
    string departemen;
    double gaji;

    void naikGaji() {
        gaji *= 1.1; // Menaikkan gaji sebesar 10%
    }
};

int main() {
    Pegawai pegawai1;
    pegawai1.nama = "Budi";
    pegawai1.departemen = "IT";
    pegawai1.gaji = 5000000;

    cout << "Gaji sebelum kenaikan: " << pegawai1.gaji << endl;
    pegawai1.naikGaji(); // Memanggil fungsi naikGaji
    cout << "Gaji setelah kenaikan: " << pegawai1.gaji << endl;

    return 0;
}
