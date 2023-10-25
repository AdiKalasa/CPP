#include <iostream>
#include <stdlib.h>
using namespace std;

// Fungsi untuk menampilkan papan permainan
void display_board(char board[]) {
    system("cls");  // Membersihkan layar konsol
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " \n";
    cout << "---+---+---\n";
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " \n";
    cout << "---+---+---\n";
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " \n";
}

// Fungsi untuk memeriksa apakah sebuah pemain telah menang
bool check_win(char board[], char symbol) {
    // Pemeriksaan baris
    for (int i = 0; i < 9; i += 3) {
        if (board[i] == symbol && board[i+1] == symbol && board[i+2] == symbol) {
            return true;
        }
    }

    // Pemeriksaan kolom
    for (int i = 0; i < 3; i++) {
        if (board[i] == symbol && board[i+3] == symbol && board[i+6] == symbol) {
            return true;
        }
    }

    // Pemeriksaan diagonal
    if (board[0] == symbol && board[4] == symbol && board[8] == symbol) {
        return true;
    }
    if (board[2] == symbol && board[4] == symbol && board[6] == symbol) {
        return true;
    }

    // Jika tidak ada yang menang
    return false;
}

int main() {
    char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char symbol;
    int position;

    cout << "Selamat datang di permainan Tic Tac Toe!\n";
    cout << "Pemain 1: X\nPemain 2: O\n";

    // Loop utama permainan
    for (int i = 0; i < 9; i++) {
        display_board(board);

        // Menentukan giliran pemain
        if (i % 2 == 0) {
            symbol = 'X';
        }
        else {
            symbol = 'O';
        }

        // Meminta input posisi dari pemain
        cout << "Pemain " << (i % 2) + 1 << ", masukkan posisi yang Anda inginkan: ";
        cin >> position;

        // Memeriksa apakah input posisi valid
        while (board[position-1] == 'X' || board[position-1] == 'O') {
            cout << "Posisi tersebut sudah terisi. Masukkan posisi lain: ";
            cin >> position;
        }

        // Memperbarui papan permainan
        board[position-1] = symbol;

        // Memeriksa apakah ada yang menang
        if (check_win(board, symbol)){
            display_board(board);
            cout << "Pemain " << (i % 2) + 1 << " menang!\n" << endl;
        }
    }

}
