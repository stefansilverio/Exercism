#include "triangle.h"
#include <iostream>
using namespace std;

namespace triangle {
	
	bool obeys_inequality(double a, double b, double c)
	{
		return ((a + b >= c) && (b + c >= a) && (a + c >= b));
	}

	flavor kind(double a, double b, double c)
	{
		if (abs(a) <= 0 || abs(b) <= 0 || abs(c) <= 0)
			throw std::domain_error("Triangles must have non-zero sides.");
		if (!obeys_inequality(a, b, c))
			throw std::domain_error("Any two sides must sum to be greater than third.");
		if ((abs(a-b) < 1e-9) && (abs(b-c) < 1e-9))
		{
			cout << "I'm equilateral\n";
			return flavor::equilateral;
		}
		if ((abs(a-b) < 1e-9) || (abs(b-c) < 1e-9) || (abs(a-c) < 1e-9))
		{
		   cout << "I'm equilat\n";
			return flavor::isosceles;
		}
		cout << "I'm scalene\n";
		return flavor::scalene;
	}

}  // namespace triangle
