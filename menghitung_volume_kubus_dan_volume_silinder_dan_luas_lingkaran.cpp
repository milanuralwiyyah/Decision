#include <iostream>
using namespace std;

int main () {
    float angka, volumeKubus, sisi, luas, jariJari, tinggi, volumeSilinder;
    int pilihan;

    cout << "Pilihan Menu" << endl;
    cout << "1. Menghitung volume kubus" << endl;
    cout << "2. Menghitung luas lingkaran" << endl;
    cout << "3. Menghitung volume silinder" << endl;
    cout << "Masukan pilihan anda (1,2 atau 3) : ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
        cout << "\nMasukkan panjang sisi kubus : ";
        cin >> sisi;
        volumeKubus = sisi*sisi*sisi;
        cout << "Volume Kubus = "  << volumeKubus << endl;
        break;
        case 2:
        cout << "\nMasukkan panjang jari-jari lingkaran : ";
        cin >> jariJari;
        luas = 3.14*jariJari*jariJari;
        cout << "Luas lingkaran = "  << luas << endl;
        break;
        case 3:
        cout << "\nMasukkan panjang jari-jari lingkaran : ";
        cin >> jariJari;
        cout << "Masukkan tinggi silinder : ";
        cin >> tinggi;
        volumeSilinder = 3.14*jariJari*jariJari*tinggi;
        cout << "Volume Silinder = "  << volumeSilinder << endl;
        break;
        default:
        cout << "Pilihan Tidak Valid";
    }
    
  return 0;
}