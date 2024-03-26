#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    vector<int> data;
    int num;

    cout << "Masukkan Data Array: ";
    string input;
    getline(cin, input);

    // Membaca angka dari string input
    istringstream iss(input);
    while (iss >> num) {
        data.push_back(num);
    }

    // Menampilkan angka genap
    cout << "Nomor Genap: ";
    for (int i = 0; i < data.size(); ++i) {
        if (data[i] % 2 == 0) {
            cout << data[i];
            if (i != data.size() - 1) cout << ",";
        }
    }
    cout << endl;

    // Menampilkan angka ganjil
    cout << "Nomor Ganjil: ";
    for (int i = 0; i < data.size(); ++i) {
        if (data[i] % 2 != 0) {
            cout << data[i];
            if (i != data.size() - 1) cout << ",";
        }
    }
    cout << endl;

    return 0;
}