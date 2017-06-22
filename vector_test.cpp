#include <iostream>
#include <cstdlib>
#include "vector_class.h"

using namespace std;
using namespace vector_class;

int main(int argc, char* argv[])
{
	//Definiting Tests
	void test1();
	
	if (argc != 2)
	{
		cerr << "ERROR: TEST TAKES 1 ADDITIONAL ARGUMENT ONLY" << endl;
		exit(1);
	}

	cout << "Now checking *argv[1] : " << *argv[1] << endl;

	if (stoi(argv[1]) == 1)
	{
		cout << "Currently in case" << endl;
		test1();
	}

	return 0;
}

void test1()
{
	cout << "\n\n---------- TEST 1 ----------\n" << endl;

	cout << "Initializing empty vector and testing" << endl;
	Vector testVector;

	cout << "x and y components should be 0 and 0, respectively" << endl;

	testVector.print_x(); 
	testVector.print_y();
}
