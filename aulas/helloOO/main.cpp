#include <iostream>
#include <string>

#include "world.h"
#include "person.h"

namespace Hugo {
	int value = 30;
};

using namespace std;

World w2("TheShire");

void hello(){
	cout << "Entering hello()" << endl;
	World w1("Mordor");

	cout << w1.name() << endl;

	World * obj;

	obj = new World("Dynamic World");
	obj->sayHello();
	delete obj;
	
	w1.sayHello();
	w2.sayHello();

	w1.say("Hi");

	w1.sayGoodbye();
	w2.sayGoodbye();

	cout << "Returning hello()" << endl;
}


int main (int argc, char* argv[]) {
	cout << "Entering main" << endl;
	string msg = "Hello World";
	int  value = 10;
	cout << "value ==>" << value << endl;
	
	hello();

	World hugo("Hugo");
	hugo.sayHello();
	
	cout << "Returning main" << endl;
	return 0;
}
