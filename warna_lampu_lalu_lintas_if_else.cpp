#include <iostream>
using namespace std;

int main() {
string merah, kuning, hijau, warna;

cout << "Masukan Warna Lampu : ";
cin >> warna;

if (warna == "merah") {
cout << "Berhenti !" << endl;
} else 
if (warna == "kuning") {
cout << "Bersiap !" << endl;
} else {
if (warna == "hijau") {
cout << "Jalan !" << endl;
} else {
cout << "Warna Tidak Valid" << endl;
}
}

return 0;
}