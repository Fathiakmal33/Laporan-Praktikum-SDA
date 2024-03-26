#include <iostream>
using namespace std;

int main() {
    int sizeX, sizeY, sizeZ;

    // Meminta pengguna untuk memasukkan ukuran array
    cout << "Masukkan ukuran array (X Y Z): ";
    cin >> sizeX >> sizeY >> sizeZ;

    // Deklarasi array dengan ukuran yang dimasukkan oleh pengguna
    int arr[sizeX][sizeY][sizeZ];

    // Input elemen array
    for (int x = 0; x < sizeX; x++) {
        for (int y = 0; y < sizeY; y++) {
            for (int z = 0; z < sizeZ; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    // Output array
    for (int x = 0; x < sizeX; x++) {
        for (int y = 0; y < sizeY; y++) {
            for (int z = 0; z < sizeZ; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }

    // Tampilan array
    for (int x = 0; x < sizeX; x++) {
        for (int y = 0; y < sizeY; y++) {
            for (int z = 0; z < sizeZ; z++) {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
