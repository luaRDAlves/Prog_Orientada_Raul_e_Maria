#ifndef WORLD_H
#define WORLD_H

#include <string>

using namespace std;

class World {
	private:
		string _name;

	public:
		World(string name);
		void say(string msg = "Hi");
		void sayHello();
		void sayGoodbye();

        void name(string name){ _name = name; };
        string name() { return _name; };

		~World();

};

#endif