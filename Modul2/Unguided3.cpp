#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    // Membuat vector untuk menyimpan elemen array
    vector<int> arr(n);

    // Meminta pengguna untuk memasukkan elemen-elemen array
    cout << "Masukkan elemen array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    // Menampilkan menu
    cout << "\nMenu:\n";
    cout << "1. Cari nilai maksimum\n";
    cout << "2. Cari nilai minimum\n";
    cout << "3. Hitung nilai rata-rata\n";
    cout << "Pilih menu (1/2/3): ";
    
    int choice;
    cin >> choice;

    // Melakukan operasi sesuai dengan pilihan pengguna
    switch(choice) {
        case 1: {
            int maksimum = *max_element(arr.begin(), arr.end());
            cout << "Nilai maksimum: " << maksimum << endl;
            break;
        }
        case 2: {
            int minimum = *min_element(arr.begin(), arr.end());
            cout << "Nilai minimum: " << minimum << endl;
            break;
        }
        case 3: {
            int sum = 0;
            for (int num : arr) {
                sum += num;
            }
            double rata_rata = static_cast<double>(sum) / n;
            cout << "Nilai rata-rata: " << rata_rata << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid.\n";
    }

    return 0;
}