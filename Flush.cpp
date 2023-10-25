#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

int main() {
    srand(time(NULL));  // Mengatur seed untuk nilai acak

    while (true) {
        // Menghasilkan angka acak antara 0-99
        int angka = rand() % 10 + 1;
        int angka2 = rand() % 10 + 1;

        // Mengatur posisi kursor pada koordinat tertentu
        COORD coord = {0, 0};
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

        // Mencetak angka yang berubah-ubah
        // if (angka < 10) {cout << "0";}
        cout << "Kamu dapat " << angka << " dan " << angka2;

        Sleep(1000);  // Menunda selama 1 detik untuk memberikan efek perubahan angka
    }
    return 0;
}

