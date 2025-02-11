#include <iostream>
using namespace std;

int main () {
    int angka;
    cout << "Pilih Angka (1-7) : ";
    cin >> angka;
    
    switch (angka) {
        case 1:
        cout << "Angka 1 : Hari Senin" << endl;
        break;
        case 2:
        cout << "Angka 2 : Hari Selasa" << endl;
        break;
        case 3:
        cout << "Angka 3 : Hari Rabu" << endl;
        break;
        case 4:
        cout << "Angka 4 : Hari Kamis" << endl;
        break;
        case 5:
        cout << "Angka 5 : Hari Jum'at" << endl;
        break;
        case 6:
        cout << "Angka 6 : Hari Sabtu" << endl;
        break;
        case 7:
        cout << "Angka 7 : Hari Minggu" << endl;
        break;
        default:
        cout << "Angka Tidak Valid" << endl;
    }
    
  return 0;
}