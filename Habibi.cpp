#include <iostream>
using namespace std;

int main() {
    string nim, nama, prodi, mataKuliah;
    double nilai1, nilai2, nilai3, rataRata;

    // Masukkan nim, nama, prodi dan mata kuliah
    cout << "Masukkan nim: ";
    cin >> nim;
    cout << "Masukkan nama: ";
    cin >> nama;
    cout << "Masukkan prodi: ";
    cin >> prodi;
    cout << "Masukkan mata kuliah: ";
    cin >> mataKuliah;

    // Masukkan nilai-nilai
    cout << "Masukkan nilai 1: ";
    cin >> nilai1;
    cout << "Masukkan nilai 2: ";
    cin >> nilai2;
    cout << "Masukkan nilai 3: ";
    cin >> nilai3;

    // Hitung rata-rata
    rataRata = (nilai1 + nilai2 + nilai3) / 3;

    // Tampilkan hasil
    cout << "nim: " << nim << endl;
    cout << "nama: " << nama << endl;
    cout << "prodi: " << prodi << endl;
    cout << "Mata Kuliah: " << mataKuliah << endl;
    cout << "Rata-rata Nilai: " << rataRata << endl;

    cout<<"Klik apapun untuk menutup....";
    int klk;cin>>klk;
    return 0;
}