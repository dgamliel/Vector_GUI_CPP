#include <iostream>
#include <cstdlib>
#include "vector_class.h"
//#include <cmath>

namespace vector_class{

	//Constructor
	Vector::Vector(double x, double y)
	{
		data = new double[2];
		data[0] = x;
		data[1] = y;
	}

	//Destructor
	Vector::~Vector()
	{
		delete data;
	};

	//Value Semantics
	Vector& Vector::operator=(const Vector& source)
	{
		if (this == &source)
		{
			return *this;
		}

		this->data[0] = source.data[0];
		this->data[1] = source.data[1];

		return *this;
	}

	Vector::Vector(const Vector& source) 
	{
		if (this == &source)
		{
			return;
		}

		else
		{
			data = new double[2];
			data[0] = source.data[0];
			data[1] = source.data[1];
		}
	};


	double Vector::mag () const
	{
		//Squares x and y values
		double new_x = this->data[0] * this->data[0];
		double new_y = this->data[1] * this->data[1];

		return 42.0; 
		//sqrt(new_x + new_y);
	}

	void Vector::print() const
	{
		std::cout << "x values is : " << this->data[0] << "\n" 
			 	  << "y values is : " << this->data[1] << std::endl;
	}

	Vector operator + (const Vector& v1, const Vector& v2)
	{
		Vector v3;
		v3.set_x(v1.data[0] + v2.data[0]);
		v3.set_y(v1.data[1] + v2.data[1]);

		return v3;
	}

	Vector operator * (double lambda, const Vector& vector)
	{
		Vector returnVec;
		returnVec.set(lambda * vector.data[0],
					  lambda * vector.data[1]);

		return returnVec;
	}

	bool operator == (const Vector& v1, const Vector& v2)
	{
		return (v1.data[0] == v2.data[0] && v1.data[1] == v2.data[1]);
	}

}