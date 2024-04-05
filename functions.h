#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include "mystruct.h"

using namespace std;

void write() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ofstream file("Zhurnal.txt", ios_base::app);

    if (file.is_open()) {

        cin.ignore();

        cout << "\n\nВведите ФИ учащегося: ";
        string fi;
        getline(cin, fi);

        cout << "\n\nВведите оценку: ";
        double ocenka;
        cin >> ocenka;

        Student student(fi, ocenka);
        file << student.getFI() << " - " << student.getOcenka() << "\n";

    }

    SetConsoleCP(866);
    SetConsoleOutputCP(866);

    file.close();

}


void readfile() {

    ifstream file("Zhurnal.txt");

    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << "\n" << line << endl;
        }
        file.close();
    }
}

void udalenie() {

    ofstream file;
    file.open("Zhurnal.txt", ofstream::out | ofstream::trunc);
    file.close();

}

void chistka() {
    system("cls");
}
