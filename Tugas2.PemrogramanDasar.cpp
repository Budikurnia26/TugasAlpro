#include <iostream>
#include <string>
using namespace std;

class Ruangan {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama;
    int ruangan;
    std::string kegunaan;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Ruangan
    Ruangan(std::string n, int r, std::string k)
    {
        nama = n;
        ruangan = r;
        kegunaan = k;
    }

    // Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    // Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk mengatur ruangan
    void setRuangan(int r) {
        ruangan = r;
    }

    // Getter untuk mendapatkan ruangan
    int getRuangan() {
        return ruangan;
    }
    void setKegunaan(std::string k){
        kegunaan = k;
    }

    // Getter untuk mendapatkan kegunaan
    std::string getKegunan(){
        return kegunaan;
    }


    // Metode untuk menampilkan informasi ruangan
    void tampilkanInfo() {
        std::cout << "Nama: " << nama << ", ruangan: " << ruangan << ", kegunaan :" << kegunaan << std::endl;
    }
        
    
};
int main() {
    // Membuat objek robot
    Ruangan r1("LAB", 2122, "Praktikum");
    cout << "INFORMASI DATA ORANG"<<std::endl;
    r1.tampilkanInfo();

    r1.setNama("LAB");
    r1.setRuangan(1102);
    std::cout << "INFORMASI SETELAH DIUBAH:" << endl;
    r1.tampilkanInfo();

    return 0;


}
