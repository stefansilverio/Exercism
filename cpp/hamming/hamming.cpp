#include "hamming.h"
#include <iostream>
#include <string>

namespace hamming {

	int compute(std::string strand1, std::string strand2)
	{
		// check that the two strands are of equal length
		// otherwise throw domain error
		bool length = length_check(strand1, strand2);
		if (!length)
		   throw std::domain_error("Strings not equal length!");

		// calculate the hamming distance
		unsigned char count = 0;
		for (unsigned char i = 0; i < strand1.length(); i++)
		{
			if (strand1[i] != strand2[i])
				count++;
		}

		// return the hamming distance 
		return count;
	}

	bool length_check(std::string strand1, std::string strand2)
	{
		if (strand1.length() != strand2.length())
			return false;
		return true;
	}

}  // namespace hamming
