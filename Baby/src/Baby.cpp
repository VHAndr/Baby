//
// Created by Dai on 21.03.23.
//
#include "Baby.h"

Baby::Baby() {  // Default Constructor Implementierung - 1
    name = "Hans";
    alter = 0.0f;
    // cout << name << " ist geboren!" << endl;
}


Baby::Baby(string name, float alter) {  // Overload Constructor mit zwei Parametern
    this->name = name;
    this->alter = alter;
   // cout << name << " wurde adoptiert und ist " << alter << " Jahre alt!" << endl;
}

Baby::Baby(string name) { // Overload Constructor mit einem Parameter
    this->name = name;
    this->alter = 0.0f;
}

Baby::~Baby() {                                 //last
    cout << this->name << " stirbt!" << endl;
}

// Getter-Methoden Implementieren:
string Baby::getName() const {
    return this->name;
}

float Baby::getAlter() const {
    return this->alter;
}

// Setter-Methoden Implementieren:
void Baby::setName(string name) {
    this->name = name;
}

void Baby::trinken() {  // Methoden Implementierung
    cout << name << " trinke!" << endl;
}

void Baby::weinen() {
    cout << name << " weint: Buäääää!" << endl;
}

void Baby::schlafen(int dauer) {
    cout << name << " hat für " << dauer << " h geschlafen!" << endl;
}