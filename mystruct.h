#pragma once

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string fi;
    double ocenka;

public:
    Student(string FI, double Ocenka) {
        fi = FI;
        ocenka = Ocenka;
    }

    string getFI() {
        return fi;
    }

    double getOcenka() {
        return ocenka;
    }
};
