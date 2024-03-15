#include<iostream>
using namespace std;

int main(){
    int angka,jumlahDigit =0;

    cout << "masukan Angka:";
    cin >> angka;

    while (angka !=0){
        angka /=10;
        jumlahDigit++;
    }

    cout << "jumlah digit;" << jumlahDigit << endl;
    return 0;
}