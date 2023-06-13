#include <iostream>
#include <string>

using namespace std;

#ifndef BABY_BABY_H
#define BABY_BABY_H

class Baby {

    private:
        string name;
        float alter;

    public:
    Baby();  // Default Constructor ohne Parameter
    Baby(string, float);  // Overload Constructor mit Attribute Typen als Parametertypen
    Baby(string);
    ~Baby();  // Destructor

    string getName(void) const;  // Getter-Methode mit const
    void setName(string);  // Setter-Methode Bitte nur definieren, wenn unbedingt notwendig wegen Information Hiding.
    float getAlter(void) const;
    void weinen();
    void trinken();
    void schlafen(int);


};

#endif //BABY_BABY_H
