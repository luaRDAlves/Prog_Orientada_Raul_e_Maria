#include <iostream>
#include <string>

namespace Hugo {
	int value = 30;
};

using namespace std;


class World {
	private:
		string name;

	public:
		World(string name);
		void say(string msg);
		void sayHello();
		void sayGoodbye();

};

World::World(string name){
	cout << "Constructing object at address " << this << endl;
	this->name = name;
}

void World::say(string msg){
	cout << msg << " " << name << "!" << endl;
}

void World::sayHello(){
	say("Hello");
}

void World::sayGoodbye(){
	say("Goodbye");
}

World w2("TheShire");

int main (int argc, char* argv[]) {
	string msg = "Hello World";
	int  value = 10;
	cout << "value ==>" << value << endl;

	World w1("Mordor");
	
	w1.sayHello();
	w2.sayHello();

	w1.say("Hi");

	w1.sayGoodbye();
	w2.sayGoodbye();



	return 0;
}
