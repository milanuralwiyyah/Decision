#include <iostream>
using namespace std;

int main() {
float total_pembelian, discount = 0;

    cout << "Masukkan Total Pembelian : ";
    cin >> total_pembelian;

    if (total_pembelian >= 100000) {
    discount = 0.05 * total_pembelian;
}

cout << "Besarnya Discount = " << discount << endl;
cout << "Total Yang Harus Dibayar = " << total_pembelian - discount << endl;

return 0;
}