// vector_math.cpp
#include <vector>

/// return a vector that is the element-wise addition of left and right
std::vector<int> sum_vecs(std::vector<int> const &left, std::vector<int> const &right) {
	int size = left.size();
	std::vector<int> result(size);

	for (int i = 0; i < size; i++) {
		result[i] = left[i] + right[i];
	}
	return result;
}
