#include <iostream>
using namespace std;
 
int main() {
  int angka;
 
  cout << "Masukan Angka : ";
  cin >> angka;
 
  if (angka % 2 == 0) {
    cout << "Bilangan yang diinputkan adalah " << angka << endl;
    cout << "Bilangan tersebut adalah bilangan genap";
  }
  else {
    cout << "Bilangan yang diinputkan adalah " << angka << endl;
    cout << "Bilangan tersebut adalah bilangan ganjil";
  }
 
  cout << endl;
  return 0;
}