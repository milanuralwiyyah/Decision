#include <iostream>
using namespace std;
int main() {
    float totalPembelian, diskon, hargaSetelahDiskon;
    string jenisKeanggotaan;
    
    cout << "Masukan Total Pembelian : ";
    cin >> totalPembelian;
    cout << "Masukan Jenis Keanggotaan (Platinum, Gold. Silver) : ";
    cin >> jenisKeanggotaan;
    
    if (jenisKeanggotaan == "Platinum") {
      diskon = 0.2;
    }  
    else
    if (jenisKeanggotaan == "Gold") {
    diskon = 0.15;
    } 
    else
    if (jenisKeanggotaan == "Silver") {
    diskon = 0.1;
    } else {
    diskon = 0.0;
    }
    
 hargaSetelahDiskon = totalPembelian - (totalPembelian * diskon);
 
 cout << "Total Belanja Setelah Diskon : " << hargaSetelahDiskon << endl;

  return 0;
}