#include <iostream>
#include <string>
using namespace std;

class Robot {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama;
    int umur;
    std::string mbti;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Mahasiswa
    Robot(std::string n, int u, std::string m)
    {
        nama = n;
        umur = u;
        mbti = m;
    }

    // Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    // Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk mengatur umur
    void setUmur(int u) {
        umur = u;
    }

    // Getter untuk mendapatkan umur
    int getUmur() {
        return umur;
    }
    void setMbti(std::string m){
        mbti = m;
    }

    // Getter untuk mendapatkan mbti
    std::string getMbti(){
        return mbti;
    }


    // Metode untuk menampilkan informasi Mahasiswa
    void tampilkanInfo() {
        std::cout << "Nama: " << nama << ", Umur: " << umur << ", Mbti:" << std::endl;
    }
        
    
};
int main() {
    // Membuat objek robot
    Robot r1("Budi", 20, "NBBB");
    cout << "INFORMASI DATA ORANG"<<std::endl;
    r1.tampilkanInfo();

    r1.setNama("bangFadli");
    r1.setUmur(22);
    std::cout << "INFORMASI SETELAH DIUBAH:" << endl;
    r1.tampilkanInfo();

    return 0;


}
