#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi std::map dengan pasangan nama dan usia
    map<string, int> data;
    data["John"] = 25;
    data["Alice"] = 30;
    data["Bob"] = 28;

    // Menampilkan usia seseorang berdasarkan nama
    cout << "Usia John: " << data["John"] << " tahun" << endl;
    cout << "Usia Alice: " << data["Alice"] << " tahun" << endl;
    cout << "Usia Bob: " << data["Bob"] << " tahun" << endl;

    return 0;
}
