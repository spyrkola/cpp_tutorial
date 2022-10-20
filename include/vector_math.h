/// vector_math.h
#include <vector>
#include <iostream>

/// return a vector that is the element-wise addition of left and right
template<typename T>
std::vector<T> sum_vecs(std::vector<T> const &left, std::vector<T> const &right) {
	int size = left.size();
	std::vector<T> result(size);

	for (int i = 0; i < size; i++) {
		result[i] = left[i] + right[i];
	}
	return result;
}

/// print a vector element by element in one line
template<typename T>
void print_vec(std::vector<T> const &vec) {
	int size = vec.size();
	for (int i = 0; i < size; i++) {
		std::cout << vec[i] << " ";
	}
	std::cout << "\n";
}
