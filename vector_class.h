#ifndef VECTOR_CLASS
#define VECTOR_CLASS

namespace vector_class{
	class Vector
	{
		public:
			//Constructor 
			Vector(double x = 0, double y = 0);
			~Vector();

			//Value semantics
			Vector& operator=(const Vector& source);
			Vector(const Vector& source);

			// [] Operator
			double operator[](int index){return data[index];};

			//Const funcs
			int get_x() const {return data[0]; };
			int get_y() const {return data[1];  };
			double mag() const; //returns the magnitude

			void print() const;
			void print_x() const {std::cout << data [0] << std::endl;};
			void print_y() const {std::cout << data[1] << std::endl;};

			//Modification member vars
			void clear() {set(0,0);};

			void set_x(int value){data[0] = value; };
			void set_y(int value){data[1] = value; };
			void set(int x, int y){data[0] = x; data[1] = y; };

			//Overloaded Operators
			friend Vector operator+ (const Vector& v1, const Vector& v2);
			friend Vector operator* (double lambda, const Vector& v1);
			friend bool   operator== (const Vector& v1, const Vector& v2);

		private:
			double* data;	
	};

}


#endif