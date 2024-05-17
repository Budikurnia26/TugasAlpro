#include <iostream>
using namespace std;

// Deklarasi kelas
class ruangan {
public:
    string nama; 
    int ruangan;
};

int main() {
    // Membuat objek dari kelas Perusahaan
    ruangan orang;

    // Mengakses atribut objek dan memberi nilainya
    orang.nama = "LAB";
    orang.ruangan = 1102;

    // Menampilkan informasi objek
    cout << "Nama: " << orang.nama << endl;
    cout << "Umur: " << orang.ruangan << endl;

    return 0;
}