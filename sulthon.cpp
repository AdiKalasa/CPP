#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

struct siswa
{
    char nim[13]; // Changed the size to accommodate up to 12 characters
    char nama[20];
    float teori, praktek;
} dsiswa;

fstream fsource;

void bukafile(const char* namafile);
void bacadata();
void cetakdata();
void tutupfile();

int main()
{
    bukafile("c:\\dklsa\\hadeh.dat");
    bacadata();
    cetakdata();
    tutupfile();
    return 0;
}

void bukafile(const char* namafile)
{
    fsource.open(namafile, ios::in | ios::out | ios::binary);
}

void bacadata()
{
    float recno;
    char nim[13]; // Adjusted the size here
    fsource.seekg(0, ios::end);
    
    recno = fsource.tellg() / sizeof(dsiswa);
    cout << "Record ke -" << recno + 1 << endl;
    cout << "Nim : ";
    cin.getline(nim, 13); // Adjusted the size here
    if (nim[0] != '\0') {
        strcpy(dsiswa.nim, nim);
        cout << "Nama : ";
        cin.ignore();
        cin.getline(dsiswa.nama, 20);
        cout << "Teori : ";
        cin >> dsiswa.teori;
        cout << "Praktek: ";
        cin >> dsiswa.praktek;
        cin.ignore();
        fsource.write((char*) &dsiswa, sizeof(dsiswa));
    }
}

void cetakdata()
{
    fsource.seekg(0, ios::beg);
    cout << "--------------------------------------------------------------" << endl;
    cout << "   Nim             Nama                 Teori     Praktek " << endl;
    cout << "--------------------------------------------------------------" << endl;
    while (fsource.read((char*) &dsiswa, sizeof(dsiswa))) {
        cout << setw(12) << left << dsiswa.nim; // Adjusted the setw value and added left alignment
        cout << setw(20) << left << dsiswa.nama; // Added left alignment
        cout << setw(16) << setprecision(2) << dsiswa.teori; // Adjusted the setw value
        cout << setw(10) << setprecision(2) << dsiswa.praktek; // Adjusted the setw value
        cout << endl;
    }
}

void tutupfile()
{
    fsource.close();
}