#include "dicegame.h"

#include <iostream>

using namespace std;

bool DiceGame::play() {
    
    unsigned int fv1;
    unsigned int fv2;

    _d1.roll();
    fv1 = _d1.getFaceValue();

    _d2.roll();
    fv2 = _d2.getFaceValue();

    cout << "Values = (" << fv1 << "," << fv2 << ")" << endl;

    return ( (fv1 + fv2) == 7 );

}