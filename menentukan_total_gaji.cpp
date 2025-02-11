#include <iostream> 
using namespace std; 
int main() { 
 int jumlahJamKerja,jamLembur,totalGaji; 
 cout << "Masukan Jumlah Jam Kerja : "; 
 cin >> jumlahJamKerja; 
 if (jumlahJamKerja <= 40) { 
 totalGaji = jumlahJamKerja*20000; 
 } else if (jamLembur = jumlahJamKerja-40) { 
 totalGaji = 40*20000+jamLembur*30000; 
 }  
  
 cout << "Total Gaji : Rp " << totalGaji << endl; 
return 0; 
}