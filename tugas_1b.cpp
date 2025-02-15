#include <iostream>

using namespace std;

int main() {
    // Deklarasi array yang menyimpan daftar barang
    string Barang[] = {"Laptop", "Mouse", "Keyboard", "Monitor", "Printer"};
    // Deklarasi array yang menyimpan harga masing-masing barang
    int Harga[] = {150000, 200000, 500000, 200000, 300000};
    int jumlahBarang = sizeof(Barang) / sizeof(Barang[0]); // Menghitung jumlah elemen dalam array

    // Menampilkan daftar barang dan harganya
    cout << "Daftar Barang dan Harganya:\n";
    for (int i = 0; i < jumlahBarang; i++) {
        cout << i + 1 << ". " << Barang[i] << " - Rp" << Harga[i] << "\n";
    }

    int jumlahBeli, indeksBarang, totalHarga = 0;
    
    // Meminta input jumlah barang yang dibeli
    cout << "\nMasukkan jumlah barang yang ingin dibeli: ";
    cin >> jumlahBeli;
    
    // Loop untuk input indeks barang dan perhitungan total harga
    for (int i = 0; i < jumlahBeli; i++) {
        cout << "Masukkan indeks barang ke-" << i + 1 << " (1-" << jumlahBarang << "): ";
        cin >> indeksBarang;
        
        // Validasi indeks barang
        if (indeksBarang < 1 || indeksBarang > jumlahBarang) {
            cout << "Indeks tidak valid! Silakan masukkan indeks yang benar.\n";
            i--; // Mengulangi input jika indeks tidak valid
            continue;
        }
        
        totalHarga += Harga[indeksBarang - 1]; // Menambahkan harga barang yang dipilih ke total harga
    }
    
    // Menampilkan total harga
    cout << "\nTotal harga yang harus dibayar: Rp" << totalHarga << "\n";
    
    return 0;
}
