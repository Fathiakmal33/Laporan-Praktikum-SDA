#include <iostream>
using namespace std;

// Fungsi untuk menghitung luas persegi
float hitungLuasPersegi(float sisi) {
    return sisi * sisi;
}

// Fungsi untuk menampilkan hasil perhitungan
void tampilkanHasil(float luas) {
    cout << "Luas persegi adalah: " << luas << endl;
}

int main() {
    // Data primitif
    float sisiPersegi = 5.0;

    // Memanggil fungsi untuk menghitung luas persegi
    float luas = hitungLuasPersegi(sisiPersegi);

    // Memanggil fungsi untuk menampilkan hasil
    tampilkanHasil(luas);

    return 0;
}
