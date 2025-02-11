#include <iostream>
using namespace std;

int main() {
double bilangan1,bilangan2,hasil=0;

cout << "Masukkan bilangan pertama : ";
cin >> bilangan1;
cout << "Masukkan bilangan kedua : ";
cin >> bilangan2;

if (bilangan2==0) {
cout << "Division By Zero" << endl;
}
else {
hasil=bilangan1/bilangan2;

cout << "Hasil Pembagian Bilangan Pertama dan Kedua Adalah " << hasil << endl;
}
return 0;
}