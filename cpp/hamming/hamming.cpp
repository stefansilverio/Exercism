#include "hamming.h"
#include <iostream>
#include <string>

namespace hamming {

	bool same_lengths(const std::string &strand1, const std::string &strand2)
	{
		return (strand1.length() != strand2.length());
	}
	

	std::size_t compute(std::string strand1, std::string strand2)
	{
		// check that the two strands are of equal length
		// otherwise throw domain error
		bool length = same_lengths(strand1, strand2);
		if (!length)
		   throw std::domain_error("Strings not equal length!");

		// calculate the hamming distance
		std::size_t count = 0;
		for (std::size_t i = 0; i < strand1.length(); i++)
		{
			if (strand1[i] != strand2[i])
				count++;
		}

		// return the hamming distance 
		return count;
	}

}  // namespace hamming
