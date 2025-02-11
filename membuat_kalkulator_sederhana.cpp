#include <iostream>
using namespace std;

int main() {
double bilangan1,bilangan2,hasil=0;
int pilihan;

cout << "Masukkan bilangan pertama : ";
cin >> bilangan1;
cout << "Masukkan bilangan kedua : ";
cin >> bilangan2;
cout << "Menu Matematika" << endl;
cout << "1. Penjumlahan" << endl;
cout << "2. Pengurangan" << endl;
cout << "3. Pembagian" << endl;
cout << "4. Perkalian" << endl;
cout << "Masukan pilihan anda : ";
cin >> pilihan;

if (pilihan==1) {
hasil = bilangan1+bilangan2;
cout << "Hasil Operasi Tersebut = " << hasil << endl;
}
else if (pilihan==2) {
hasil = bilangan1-bilangan2;
cout << "Hasil Operasi Tersebut = " << hasil << endl;
}
else if (pilihan==3) {
hasil = bilangan1/bilangan2;
cout << "Hasil Operasi Tersebut = " << hasil << endl;
}
else if (pilihan==4) {
hasil = bilangan1*bilangan2;
cout << "Hasil Operasi Tersebut = " << hasil << endl;
}

return 0;
}