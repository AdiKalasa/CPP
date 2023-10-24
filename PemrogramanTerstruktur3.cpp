#include <iostream>
#include <fstream>
#include <cstring>

struct Teman {
    char nama[20];
    int age;
};

int main() {
    std::ofstream fout;
    fout.open("teman.rec", std::ios::out | std::ios::binary);

    if (!fout.is_open()) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1;
    }

    Teman teman1;
    strcpy(teman1.nama, "Rasya Aqilla");
    teman1.age = 31;
    fout.seekp(0);
    fout.write(reinterpret_cast<char*>(&teman1), sizeof(teman1));

    Teman teman2;
    strcpy(teman2.nama, "Susan Dewichan");
    teman2.age = 30;
    fout.seekp(sizeof(teman1));
    fout.write(reinterpret_cast<char*>(&teman2), sizeof(teman2));

    fout.close();

    

    std::ifstream fin;
    fin.open("teman.rec", std::ios::in | std::ios::binary);

    if (!fin.is_open()) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1;
    }

    Teman readTeman1, readTeman2;

    fin.read(reinterpret_cast<char*>(&readTeman1), sizeof(readTeman1));
    std::cout << "Name: " << readTeman1.nama << ", Age: " << readTeman1.age << std::endl;

    fin.read(reinterpret_cast<char*>(&readTeman2), sizeof(readTeman2));
    std::cout << "Name: " << readTeman2.nama << ", Age: " << readTeman2.age << std::endl;

    fin.close();

    return 0;
}