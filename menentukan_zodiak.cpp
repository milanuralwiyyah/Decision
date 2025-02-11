#include <iostream> 
using namespace std; 
int main () { 
 int tanggalLahir; 
 string bulanLahir, zodiak; 
  
 cout << "Masukan Tanggal Lahir : "; 
 cin >> tanggalLahir; 
 cout << "Masukan Bulan Lahir : "; 
 cin >> bulanLahir; 
  
 if ((tanggalLahir >= 20 && tanggalLahir <= 31 && bulanLahir == "Januari") ||  (tanggalLahir <= 18 && bulanLahir == "Februari")) { 
 zodiak = "Aquarius"; 
 } else if ((tanggalLahir >= 19 && tanggalLahir <= 29 && bulanLahir == "Februari") ||  (tanggalLahir <= 20 && bulanLahir == "Maret")) { 
 zodiak = "Pisces"; 
 } else if ((tanggalLahir >= 21 && tanggalLahir <= 31 && bulanLahir == "Maret") ||  (tanggalLahir <= 19 && bulanLahir == "April")) { 
 zodiak = "Aries"; 
 } else if ((tanggalLahir >= 20 && tanggalLahir <= 30 && bulanLahir == "April") ||  (tanggalLahir <= 20 && bulanLahir == "Mei")) { 
 zodiak = "Taurus"; 
 } else if ((tanggalLahir >= 21 && tanggalLahir <= 31 && bulanLahir == "Mei") ||  (tanggalLahir <= 20 && bulanLahir == "Juni")) { 
 zodiak = "Gemini"; 
 } else if ((tanggalLahir >= 21 && tanggalLahir <= 30 && bulanLahir == "Juni") ||  (tanggalLahir <= 22 && bulanLahir == "Juli")) { 
 zodiak = "Cancer"; 
 } else if ((tanggalLahir >= 23 && tanggalLahir <= 31 && bulanLahir == "Juli") ||  (tanggalLahir <= 22 && bulanLahir == "Agustus")) { 
 zodiak = "Leo";
 } else if ((tanggalLahir >= 23 && tanggalLahir <= 31 && bulanLahir == "Agustus") ||  (tanggalLahir <= 22 && bulanLahir == "September")) { 
 zodiak = "Virgo"; 
 } else if ((tanggalLahir >= 23 && tanggalLahir <= 30 && bulanLahir == "September") ||  (tanggalLahir <= 22 && bulanLahir == "Oktober")) { 
 zodiak = "Libra"; 
 } else if ((tanggalLahir >= 23 && tanggalLahir <= 31 && bulanLahir == "Oktober") ||  (tanggalLahir <= 21 && bulanLahir == "November")) { 
 zodiak = "Scorpio"; 
 } else if ((tanggalLahir >= 22 && tanggalLahir <= 30 && bulanLahir == "November") ||  (tanggalLahir <= 21 && bulanLahir == "Desember")) { 
 zodiak = "Sagittarius"; 
 } else if ((tanggalLahir >= 22 && tanggalLahir <= 31 && bulanLahir == "Desember") ||  (tanggalLahir <= 19 && bulanLahir == "Januari")) { 
 zodiak = "Capricorn"; 
 } else { 
 zodiak = "Tanggal Lahir dan Bulan Lahir Tidak Valid"; 
 } 
 cout << "Zodiak Anda Adalah: " << zodiak << endl; 
 return 0; 
}