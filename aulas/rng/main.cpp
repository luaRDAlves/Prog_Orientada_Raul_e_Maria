#include <iostream>
#include <random>

using namespace std;

int main (int argc, char* argv[]) {
	cout << "Hello rng !" << endl;

	unsigned int cpp_dist[6];
	unsigned int c_dist[6];
	for (int i = 0; i < 6; i++) {
		cpp_dist[i] = 0;
		c_dist[i] = 0;
	}

	// Create a random device and use it to seed the random number generator
	random_device rd;
	mt19937 gen(rd());
	//uniform_int_distribution<> dis(1, 6);
	binomial_distribution<> dis(6, 0.6); // mean = n*p = 3

	srand(time(NULL));

	int times = 100000;

	// Generate and print a random number between 1 and 6
	for (int i = 0; i < times; i++) {
		int cpp_random_number = dis(gen);
		int c_random_number = (rand() % 6) + 1;
		cpp_dist[cpp_random_number - 1]++;
		c_dist[c_random_number - 1]++;
	}

	cout << "CPP generated histogram: " << endl;
	for (int i = 0; i < 6; i++) {
		cout << (i + 1) << ": " << cpp_dist[i] << " (" << (cpp_dist[i]/(double)times)*100 << ")" << endl;
	}
	cout << "C generated histogram: " << endl;
	for (int i = 0; i < 6; i++) {
		cout << (i + 1) << ": " << c_dist[i] << " (" << (c_dist[i]/(double)times)*100 << ")" << endl;
	}

	return 0;
}
