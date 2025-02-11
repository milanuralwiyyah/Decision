#include <iostream>
using namespace std;

int main() {
int usia;

cout << "Masukan Usia : ";
cin >> usia;

if (usia >= 0 && usia <= 5) {
cout << "Anda Termasuk Golongan Balita" << endl;
} else 
if (usia >= 6 && usia <= 12) {
cout << "Anda Termasuk Golongan Anak-Anak" << endl;
} else 
if (usia >= 13 && usia <= 17) {
cout << "Anda Termasuk Golongan Remaja" << endl;
} else 
if (usia >= 18 && usia <= 59) {
cout << "Anda Termasuk Golongan Dewasa" << endl;
} else {
if (usia >= 60) {
cout << "Anda Termasuk Golongan Lansia" << endl;
} else {
cout << "Usia Tidak Valid" << endl;
}
}
return 0;
}