#include <iostream>
using namespace std;

int main() {
string member;
int latihan, sisaLatihan;

    cout << "Menentukan Sisa Latihan Sesuai Member Gym" << endl;
    cout << "Masukkan Member : ";
    cin >> member;
    cout << "Masukan Jumlah Latihan : ";
    cin >> latihan;

    if (member == "Silver") {
    sisaLatihan = 10 - latihan;
    if (sisaLatihan == 0){
    cout << "Anda Sudah Tidak Bisa Latihan Lagi";
    } else if (sisaLatihan <0){
        cout << "Anda Telah Melebihi Batas";
    }else {
        cout << "Anda Masih Bisa Latihan Sebanyak : " << sisaLatihan << " Kali";
    }
    }else if (member=="Gold"){
        sisaLatihan = 20-latihan;
    if (sisaLatihan == 0){
    cout << "Anda Sudah Tidak Bisa Latihan Lagi";
    } else if (sisaLatihan <0){
        cout << "Anda Telah Melebihi Batas";
    }else {
        cout << "Anda Masih Bisa Latihan Sebanyak : " << sisaLatihan << " Kali";
    }   
    } else if (member=="Platinum"){
        cout << "Tidak terbatas, silahkan latihan sepuasnya";
        }
        
    return 0;
}