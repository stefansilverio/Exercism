#include "triangle.h"
#include <iostream>

namespace triangle {
	
	bool valid(double a, double b, double c)
	{
		if ((a + b > c) && (b + c > a) && (a + c > b))
			return true; // sum of any two sides is greater than the third 
		return false;
	}

	flavor kind(double a, double b, double c)
	{
		if (a <= 0 || b <= 0 || c <= 0)
			throw std::domain_error("Triangles must have non-zero sides.");
		if (!valid(a, b, c))
			throw std::domain_error("Any two sides must sum to be greater than third.");
		if (a == b && b == c)
			return triangle::flavor::equilateral;
		if (a == b || b == c || a == c)
			return triangle::flavor::isosceles;
		return triangle::flavor::scalene;
	}

}  // namespace triangle
