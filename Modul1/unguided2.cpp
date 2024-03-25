#include <iostream>
#include <string>
using namespace std;

// Definisi struct untuk merepresentasikan titik di bidang 2D
struct Titik {
    int x;
    int y;
};

// Definisi class untuk merepresentasikan sebuah lingkaran
class Lingkaran {
private:
    Titik pusat;
    double radius;

public:
    // Constructor untuk inisialisasi objek lingkaran
    Lingkaran(Titik pusat, double radius) {
        this->pusat = pusat;
        this->radius = radius;
    }

    // Metode untuk menghitung luas lingkaran
    double hitungLuas() {
        return 3.14 * radius * radius;
    }

    // Metode untuk menampilkan informasi lingkaran
    void tampilkanInfo() {
        cout << "Lingkaran dengan pusat di (" << pusat.x << ", " << pusat.y << ") ";
        cout << "dan radius " << radius << endl;
    }
};

int main() {
    // Membuat objek titik dan lingkaran
    Titik titikPusat = {3, 4};
    Lingkaran lingkaran(titikPusat, 5);

    // Memanggil metode untuk menampilkan informasi lingkaran
    lingkaran.tampilkanInfo();

    // Memanggil metode untuk menghitung dan menampilkan luas lingkaran
    cout << "Luas lingkaran: " << lingkaran.hitungLuas() << endl;

    return 0;
}
