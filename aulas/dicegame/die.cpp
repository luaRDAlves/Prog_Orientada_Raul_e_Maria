#include "die.h"

#include <random>
#include <ctime>

Die::Die() {
    srand(time(NULL));
}

void Die::roll() {
    _faceValue = (rand() % 6) + 1;
}

unsigned int Die::getFaceValue() {
    return _faceValue;
}
