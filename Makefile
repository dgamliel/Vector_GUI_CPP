test: vector_test.cpp vector_class.o
	g++ -g -std=c++11 -Wall vector_test.cpp vector_class.o -o test

vector_class.o: vector_class.cpp vector_class.h
	g++ vector_class.cpp -c

clean:
	rm -rf *.o test
