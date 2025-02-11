#include <iostream>
using namespace std;

int main() {
string jenisKeanggotaan;
int jumlahLatihan, sisaLatihan;

    cout << "Masukkan Jenis Keanggotaan : ";
    cin >> jenisKeanggotaan;
    cout << "Masukan Jumlah Latihan : ";
    cin >> jumlahLatihan;

    if (jenisKeanggotaan == "silver") {
    sisaLatihan = 10 - jumlahLatihan;
    cout << "Anda Masih Bisa Latihan Bulan Ini Sebanyak = " << sisaLatihan << " Kali" << endl;
    } else 
    if (jenisKeanggotaan == "gold") {
    sisaLatihan = 20 - jumlahLatihan;
    cout << "Anda Masih Bisa Latihan Bulan Ini Sebanyak = " << sisaLatihan << " Kali" << endl;
    } else {
    if (jenisKeanggotaan == "platinum") {
    cout << "Latihan Tidak Terbatas" << endl;
    }
    }
return 0;
}