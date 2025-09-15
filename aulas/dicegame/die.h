#ifndef DIE_H
#define DIE_H

class Die {

public:
    Die();

    void roll();
    unsigned int getFaceValue();

private:
    unsigned int _faceValue;

};

#endif