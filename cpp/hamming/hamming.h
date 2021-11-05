#if !defined(HAMMING_H)
#define HAMMING_H
#include <string>

namespace hamming {

	std::size_t compute(const std::string &strand1, const std::string &strand2);

}  // namespace hamming

#endif // HAMMING_H