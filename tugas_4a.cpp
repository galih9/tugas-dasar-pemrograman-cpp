#include <iostream>
#include <string>

using namespace std;

// Procedure untuk menampilkan data anggota perpustakaan
void tampilkanData(string noAnggota, string nama, string prodi, string alamat, string kota) {
    cout << "\n===== Data Anggota Perpustakaan =====" << endl;
    cout << "No Anggota    : " << noAnggota << endl;
    cout << "Nama         : " << nama << endl;
    cout << "Program Studi: " << prodi << endl;
    cout << "Alamat       : " << alamat << endl;
    cout << "Kota Domisili: " << kota << endl;
    cout << "==================================\n" << endl;
}

int main() {
    string noAnggota, nama, prodi, alamat, kota;
    
    // Input data anggota
    cout << "Masukkan No Anggota    : ";
    getline(cin, noAnggota);
    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "Masukkan Program Studi : ";
    getline(cin, prodi);
    cout << "Masukkan Alamat Tinggal: ";
    getline(cin, alamat);
    cout << "Masukkan Kota Domisili : ";
    getline(cin, kota);
    
    // Memanggil procedure untuk menampilkan data
    tampilkanData(noAnggota, nama, prodi, alamat, kota);
    
    return 0;
}
