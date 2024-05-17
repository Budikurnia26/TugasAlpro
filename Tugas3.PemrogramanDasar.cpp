#include <iostream>
using namespace std;

// Deklarasi kelas
class Perusahaan {
public:
    string nama; 
    int umur;
};

int main() {
    // Membuat objek dari kelas Perusahaan
    Perusahaan orang;

    // Mengakses atribut objek dan memberi nilainya
    orang.nama = "Djarum";
    orang.umur = 63;

    // Menampilkan informasi objek
    cout << "Nama: " << orang.nama << endl;
    cout << "Umur: " << orang.umur << endl;

    return 0;
}