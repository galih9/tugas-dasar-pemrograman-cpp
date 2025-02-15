#include <iostream>
using namespace std;

// Fungsi untuk mengurutkan array menggunakan Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar elemen jika tidak dalam urutan yang benar
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Fungsi untuk mencetak array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Program utama
int main() {
    int J[] = {7, 5, 2, 6, 4, 8, 3};
    int n = sizeof(J) / sizeof(J[0]);

    cout << "Array sebelum diurutkan: ";
    printArray(J, n);

    bubbleSort(J, n);

    cout << "Array setelah diurutkan: ";
    printArray(J, n);

    return 0;
}
