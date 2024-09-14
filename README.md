# Bengkel Ketok Magic - Nota Pembayaran

Program ini dibuat untuk menghitung dan menampilkan nota pembayaran sederhana yang mencakup harga alat, ongkos kerja, pajak PPn 10%, dan total pembayaran.

## Fitur

- Mengambil input berupa harga alat dan ongkos kerja.
- Menghitung total pembayaran termasuk pajak PPn 10%.
- Menampilkan rincian harga, ongkos kerja, pajak, dan total bayar.
- Format output pajak dengan dua digit desimal.

## Cara Kerja Program

1. Program meminta pengguna untuk memasukkan harga alat dan ongkos kerja.
2. Program menghitung total biaya (harga alat + ongkos kerja).
3. Pajak dihitung sebesar 10% dari total biaya.
4. Total pembayaran dihitung dengan menjumlahkan total biaya dan pajak.
5. Program menampilkan nota pembayaran dengan rincian berikut:
   - Harga alat
   - Ongkos kerja
   - Pajak PPn 10%
   - Total bayar

## Contoh Output

```bash
Harga Alat : 100000
Ongkos Kerja: 50000
BENGKEL KETOK MAGIC
NOTA PEMBAYARAN
Harga Alat     : Rp100000
Ongkos Kerja   : Rp50000
Pajak PPn 10%  : Rp15000.00
Total Bayar    : Rp165000

Terima Kasih Atas Kunjungan Anda
```

## Instalasi dan Penggunaan

### Prasyarat

Pastikan Anda sudah memiliki compiler C++ yang terinstal di sistem Anda. Misalnya:

- g++ untuk Linux/MacOS
- MinGW untuk Windows

### Cara Kompilasi

1. Simpan kode di file main.cpp.

2. Kompilasi kode menggunakan perintah berikut:

- Untuk Linux/MacOS:

```bash
g++ -o bengkel main.cpp
```

- Untuk Windows (menggunakan MinGW):

```bash
g++ -o bengkel.exe main.cpp
```

## Cara Menjalankan Program

- Linux/MacOS:

```bash
./bengkel
```

- Windows:

```bash
bengkel.exe
```

## Teknologi yang Digunakan

- C++: Bahasa pemrograman utama yang digunakan untuk menulis program ini.
- iostream: Untuk input/output data.
- iomanip: Untuk manipulasi format angka desimal.

## Code:

```cpp
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

```
