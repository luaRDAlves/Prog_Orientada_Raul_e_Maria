#include "person.h"

#include <iostream>

using namespace std;

Person::Person(string name){
	this->name = name;
}

void Person::say(){
	cout << "My name is " << name << endl;
}