//
// Created by Victor Andrade on 25/04/2023.
//

#include <iostream>
#include "Baby.h"

int main(){

    string name;
    float alter;

    Baby Baby_1;
    Baby Baby_2("Vic", 1);
    Baby Baby_3("Dani");

//    cin >> name;
//    Baby Baby_4(name);

    cout << Baby_1.getName() << " ist geboren!" << endl;
    cout << Baby_2.getName() << " wurde adoptiert und ist " << alter << " Jahre alt!" << endl;
    cout << Baby_3.getName() << " ist geboren!" << endl;
//    cout << Baby_4.getName() << " ist geboren!" << endl;
    cout << endl;

    Baby_1.weinen();
    Baby_1.trinken();
    Baby_1.schlafen(3);

} // last