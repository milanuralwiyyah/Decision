#include <iostream>
using namespace std;

int main()
{
    int tahun;
    cout << "Masukan Tahun : ";
    cin >> tahun;
    
    if ((tahun % 4 == 0 && tahun % 100 !=0) || (tahun % 400==0)) {
    cout << "Tahun tersebut adalah tahun kabisat." << endl;
    } else {
    cout << "Tahun tersebut bukan tahun kabisat." << endl;
    }

return 0;
}