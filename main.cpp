#include <iostream>
#include <iomanip>  // untuk mengatur presisi angka desimal
using namespace std;

long int harga, ongkos, total, totba;
double pajak;

int main() {
    // Input harga dan ongkos
    cout << "Harga Alat : ";
    cin >> harga;
    cout << "Ongkos Kerja: ";
    cin >> ongkos;

    // Hitung total dan pajak
    total = harga + ongkos;
    pajak = total * 0.1;
    totba = total + pajak;

    // Print hasil nota pembayaran
    cout << "BENGKEL KETOK MAGIC" << endl;
    cout << "NOTA PEMBAYARAN" << endl;
    cout << "Harga Alat     : Rp" << harga << endl;
    cout << "Ongkos Kerja   : Rp" << ongkos << endl;
    cout << "Pajak PPn 10%  : Rp" << fixed << setprecision(2) << pajak << endl;
    cout << "Total Bayar    : Rp" << totba << endl << endl;
    cout << "Terima Kasih Atas Kunjungan Anda" << endl;

    return 0;
}
