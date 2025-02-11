#include <iostream>
using namespace std;

int main() {
    int jumlahUang;

    cout << "Masukkan Jumlah Uang : ";
    cin >> jumlahUang;
    cout << endl;

    if (jumlahUang >= 100000) {
        cout << "Rp 100.000 : " << jumlahUang / 100000 << " lembar" << endl;
        jumlahUang %= 100000;
    } 
    if (jumlahUang >= 50000) {
        cout << "Rp 50.000 : " << jumlahUang / 50000 << " lembar" << endl;
        jumlahUang %= 50000;
    } 
    if (jumlahUang >= 20000) {
        cout << "Rp 20.000 : " << jumlahUang / 20000 << " lembar" << endl;
        jumlahUang %= 20000;
    } 
    if (jumlahUang >= 10000) {
        cout << "Rp 10.000 : " << jumlahUang / 10000 << " lembar" << endl;
        jumlahUang %= 10000;
    } 
    if (jumlahUang >= 5000) {
        cout << "Rp 5.000 : " << jumlahUang / 5000 << " lembar" << endl;
        jumlahUang %= 5000;
    } 
    if (jumlahUang >= 2000) {
        cout << "Rp 2.000 : " << jumlahUang / 2000 << " lembar" << endl;
        jumlahUang %= 2000;
    } 
    if (jumlahUang >= 1000) {
        cout << "Rp 1.000 : " << jumlahUang / 1000 << " lembar" << endl;
        jumlahUang %= 1000;
    }

    return 0;
}