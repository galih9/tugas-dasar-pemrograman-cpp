#include <iostream> // Library ini digunakan untuk operasi input dan output dalam program C++

int main() {
    // Mendeklarasikan array string kedalam variable
    std::string A[] = {"Programming", "Networking", "Analisis Data", "Cyber Security"};
    int size = sizeof(A) / sizeof(A[0]); // Menghitung jumlah elemen dalam array dengan membagi ukuran total array dengan ukuran satu elemen

    // Menampilkan semua elemen dalam array
    std::cout << "Daftar Bidang Keahlian dalam Komputer:" << std::endl;
    for (int i = 0; i < size; i++) { // Melakukan iterasi melalui semua elemen dalam array untuk menampilkannya
        std::cout << "- " << A[i] << std::endl; // Mencetak setiap elemen array ke layar dengan format daftar
    }
    
    return 0;
}
