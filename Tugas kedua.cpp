#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

struct siswa {
    char nim[10];
    char nama[20];
    float teori, praktek;
} dsiswa;

fstream fsource;

void bukafile(const char* namafile);
void bacadata();
void cetakdata();
void tutupfile();

int main() {
    cout<<"\nNama: Adi Kalasa"<<endl;
    cout<<"NIM : 2255201002"<<endl;
    const char* namafile = "data_siswa.dat";
    string file = namafile;
    ofstream bukaFile(file, ios_base::app);
    bukafile(namafile);
    bacadata();
    cetakdata();
    tutupfile();
    return 0;
}

void bukafile(const char* namafile) {
    fsource.open(namafile, ios::in | ios::out | ios::binary);
    if(!(fsource.is_open())){
        cerr<<"\nGagal membuka file"<<endl;
    }else{
        cout<<"\nBerhasil membuka file"<<endl;
    }
}

void bacadata() {
    float recno = 0;
    char nim[10];
    fsource.seekg(0, ios::end);
    fsource.seekp(0, ios::end);
    do {
        recno = fsource.tellg() / sizeof(dsiswa);
        cout << "\nRecord ke -" << recno + 1 << endl;
        cout << "Nim : ";
        cin.getline(nim, 10);
        if (nim[0] != 0) {
            strcpy(dsiswa.nim, nim);
            cout << "Nama : ";
            cin >> dsiswa.nama; // Menggunakan getline untuk mengambil nama dengan spasi
            cout << "Teori :";
            cin >> dsiswa.teori;
            cout << "Praktek: ";
            cin >> dsiswa.praktek;
            cin.ignore();
            fsource.write((char*)&dsiswa, sizeof(dsiswa));
        }
    } while (nim[0] != 0);
}

void cetakdata() {
    fsource.seekg(0, ios::beg);
    cout << "\n----------------------------------------" << endl;
    cout << "       Nim          Nama  Teori Praktek " << endl;
    cout << "----------------------------------------" << endl;
    while (fsource.read((char*)&dsiswa, sizeof(dsiswa))) {
        cout << setw(10) << dsiswa.nim;
        cout << setw(14) << dsiswa.nama;
        cout << setw(5) << setprecision(2) << dsiswa.teori;
        cout << setw(7) << setprecision(2) << dsiswa.praktek << endl;
    }
}

void tutupfile() {
    fsource.close();
}