#include <iostream>
using namespace std;

// Fungsi untuk mengurutkan array menggunakan Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Indeks elemen terkecil
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Tukar elemen terkecil dengan elemen pertama dari bagian yang belum terurut
        swap(arr[i], arr[minIndex]);
    }
}

// Fungsi untuk mencetak array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Fungsi utama (main)
int main() {
    int X[] = {29, 10, 14, 37, 5}; // Inisialisasi array
    int n = sizeof(X) / sizeof(X[0]); // Hitung jumlah elemen dalam array

    cout << "Array sebelum diurutkan: ";
    printArray(X, n); // Cetak array sebelum sorting

    selectionSort(X, n); // Panggil fungsi Selection Sort

    cout << "Array setelah diurutkan: ";
    printArray(X, n); // Cetak array setelah sorting

    return 0;
}
