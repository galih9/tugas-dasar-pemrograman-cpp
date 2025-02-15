#include <iostream>
using namespace std;

// Function untuk menghitung total pembayaran
double hitungTotal(double biayaKonsultasi, double biayaObat, double biayaRawatInap, int lamaInap) {
    return biayaKonsultasi + biayaObat + (biayaRawatInap * lamaInap);
}

// Function untuk menampilkan rincian pembayaran
void tampilkanRincian(string nama, double biayaKonsultasi, double biayaObat, double biayaRawatInap, int lamaInap, double total) {
    cout << "\n===============================" << endl;
    cout << "Rincian Biaya Pengobatan Pasien" << endl;
    cout << "===============================" << endl;
    cout << "Nama Pasien          : " << nama << endl;
    cout << "Biaya Konsultasi     : Rp. " << biayaKonsultasi << endl;
    cout << "Biaya Obat           : Rp. " << biayaObat << endl;
    cout << "Biaya Rawat Inap     : Rp. " << biayaRawatInap << " per hari" << endl;
    cout << "Lama Inap           : " << lamaInap << " hari" << endl;
    cout << "-------------------------------" << endl;
    cout << "Total Pembayaran     : Rp. " << total << endl;
    cout << "===============================" << endl;
}

int main() {
    string nama;
    double biayaKonsultasi = 200000;
    double biayaObat = 250000;
    double biayaRawatInap = 500000;
    int lamaInap = 3;
    
    // Input nama pasien
    cout << "Masukkan nama pasien: ";
    getline(cin, nama);
    
    // Hitung total pembayaran
    double total = hitungTotal(biayaKonsultasi, biayaObat, biayaRawatInap, lamaInap);
    
    // Tampilkan rincian pembayaran
    tampilkanRincian(nama, biayaKonsultasi, biayaObat, biayaRawatInap, lamaInap, total);
    
    return 0;
}
