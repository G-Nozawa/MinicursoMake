#include "classes.h"
#include <iostream>
using namespace std;

int Classe1::classe1Int(int valor1){
    _classe1Int += valor1;
    cout << "Classe 1: " <<  _classe1Int << endl;
    return _classe1Int;
};