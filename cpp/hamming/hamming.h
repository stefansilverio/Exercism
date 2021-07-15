#if !defined(HAMMING_H)
#define HAMMING_H
#include <string>

namespace hamming {

	int compute(std::string strand1, std::string strand2);

	bool length_check(std::string strand1, std::string strand2);

}  // namespace hamming

#endif // HAMMING_H