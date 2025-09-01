#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person {
	private:
		string name;

	public:
		Person(string name = "no_name");
		void say();
};

#endif