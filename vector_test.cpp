#include <iostream>
#include <cstdlib>
#include <sstream>
#include "vector_class.h"

using namespace std;
using namespace vector_class;

int main(int argc, char* argv[])
{
	//Declaring Test functions
	void test1();
	void test2();
	void test3();
	void test4();
	void test5();
	
	//Checks how many arguments passed
	if (argc != 2)
	{
		cerr << "ERROR: TEST TAKES 1 ADDITIONAL ARGUMENT ONLY" << endl;
		exit(1);
	}

	int input = atoi(argv[1]);

	if (input == 1)
	{
		test1();
	}

	if (input == 2)
	{
		test2();
	}

	if (input == 3)
	{
		test3();
	}

	if (input == 4)
	{
		test4();
	}
	return 0;
}

void test1()
{
	cout << "\n\n---------- TEST 1 ----------\n" << endl;

	cout << "Initializing empty vector and testing\n" << endl;
	Vector testVector;

	cout << "Now Testing using print_x and print_y" << endl;
	cout << "x and y components should be 0 and 0, respectively" << endl;

	testVector.print_x(); 
	testVector.print_y();

	cout << "\nNow Testing using print function" << endl;
	testVector.print();

	cout << "\nNow Testing in line getter functions" << endl;
	cout <<   "------------------------------------" << endl;
	cout << "testVector has an x value of : " << testVector.get_x() << 
		  "\ntestVector has an x value of : " << testVector.get_y() << "\n" <<  
		  endl;

	cout << "\nFINISHED : TEST 1\n" << endl;
}

void test2()
{
	cout << "\n---------- TEST 2 ----------\n" << endl;
	cout << "Now testing constructor with various parameters and copy constructor" << endl;

	Vector v1(3), v2(1,2), v3(0,3);

	cout << "\nTesting v1 - EXPECTED RESULT : (3,0)\n" << endl;
	v1.print();
	cout << "\nTesting v2 - EXPECTED RESULT : (1,2)\n" << endl;
	v2.print();
	cout << "\nTesting v3 - EXPECTED RESULT : (0,3)\n" << endl;
	v3.print();

	cout << "\nFINISHED : TEST 2\n" << endl;

}

void test3()
{
	cout << "\n---------- TEST 3 ----------\n" << endl;
	cout << "Now testing '+' operator : " << endl;
	cout << "\nInitializing vectors v1, v2, v3 : (1,1), (2,2), (3,3)"  << endl;
	Vector v1(1,1), v2(2,2), v3(3,3);

	cout << "\nNow attempting to add v1 + v2 - EXPECTED RESULT : (3,3)" << endl;
	Vector v4 = v1+v2;
	v4.print();

	cout << "\nNow attempting to add v2 + v3 - EXPECTED RESULT : (5,5)" << endl;
	Vector v5 = v2 + v3;
	v5.print();

	cout << "\nNow checking negative addition to see result: (5,5) + (-5,5) - EXPECTED RESULT : (0,0)" << endl;
	Vector nv5(-5,-5);
	Vector naught = v5 + nv5;
	naught.print();

	cout << "\nFINISHED : TEST 3\n" << endl;
}

void test4()
{
	cout << "\n---------- TEST 4 ----------\n" << endl;
	cout << "Now testing '+' operator : " << endl;
	cout << "\nInitializing vectors v1, v2, v3 : (1,1), (2,2), (3,3)"  << endl;
	Vector v1(1,1), v2(2,2), v3(3,3);

	cout << "\nNow attempting to add v1 + v2 - EXPECTED RESULT : (3,3)" << endl;
	Vector v4 = v1+v2;
	v4.print();

	cout << "\nNow attempting to add v2 + v3 - EXPECTED RESULT : (5,5)" << endl;
	Vector v5 = v2 + v3;
	v5.print();

	cout << "\nNow checking negative addition to see result: (5,5) + (-5,5) - EXPECTED RESULT : (0,0)" << endl;
	Vector nv5(-5,-5);
	Vector naught = v5 + nv5;
	naught.print();

	cout << "\nFINISHED : TEST 4\n" << endl;
}