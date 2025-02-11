#include <iostream>
using namespace std;

int main () {
    int umur;
    cout << "Masukan umur : ";
    cin >> umur;
    
    if (umur < 12) {
        cout << "Anak-Anak" << endl;
    }  else if (umur < 17) {
        cout << "Remaja" << endl;
    } else if (umur < 59) {
        cout << "Dewasa" << endl;
    } else {
        cout << "Lansia" << endl;
    }
  return 0;
}