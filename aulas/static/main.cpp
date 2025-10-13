#include <iostream>
using namespace std;

class TheRing {
public:
	void sayIt() {
		cout << "My precious!!!" << endl;
	}
	static TheRing * getInstance();

private:
	TheRing(){}

	static TheRing* _instance;
};

TheRing * TheRing::_instance = NULL;

TheRing * TheRing::getInstance(){
	if(_instance == NULL)
		_instance = new TheRing();

	return _instance;
}


int main (int argc, char* argv[]) {
	cout << "Hello static !" << endl;

	TheRing* obj = TheRing::getInstance();
	obj->sayIt();


	TheRing::getInstance()->sayIt();


	return 0;
}
