#include "world.h"

#include <iostream>

using namespace std;

World::World(string name){
	cout << "Constructing object at address " << this << endl;
	_name = name;
}

void World::say(string msg){
	cout << msg << " " << _name << "!" << endl;
}

void World::sayHello(){
	say("Hello");
}

void World::sayGoodbye(){
	say("Goodbye");
}

World::~World(){
	cout << "Destroying "  << _name << ", address =" << this << endl;
}
