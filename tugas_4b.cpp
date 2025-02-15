#include <iostream>
using namespace std;

// Prosedur untuk menghitung dan menampilkan nilai akhir
void hitungNilaiAkhir(string nim, string nama, float tugas, float uts, float uas) {
    float totalNilai = (tugas + uts + uas) / 3;
    
    cout << "\n==============================\n";
    cout << "Data Mahasiswa" << endl;
    cout << "==============================\n";
    cout << "NIM: " << nim << endl;
    cout << "Nama: " << nama << endl;
    cout << "Nilai Tugas: " << tugas << endl;
    cout << "Nilai UTS: " << uts << endl;
    cout << "Nilai UAS: " << uas << endl;
    cout << "Total Nilai: " << totalNilai << endl;
}

int main() {
    string nim, nama;
    float tugas, uts, uas;
    
    // Input data mahasiswa
    cout << "Masukkan NIM: ";
    getline(cin, nim);
    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "Masukkan Nilai Tugas: ";
    cin >> tugas;
    cout << "Masukkan Nilai UTS: ";
    cin >> uts;
    cout << "Masukkan Nilai UAS: ";
    cin >> uas;
    
    // Memanggil prosedur untuk menghitung dan menampilkan hasil
    hitungNilaiAkhir(nim, nama, tugas, uts, uas);
    
    return 0;
}
