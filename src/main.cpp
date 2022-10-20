// main.cpp
#include <iostream>
#include <vector>

/// function prototype
std::vector<int> sum_vecs(std::vector<int> const &left, std::vector<int> const &right);

int main() {
	std::vector<int> vec1{1, 2, 3, 4, 5};
	std::vector<int> vec2{6, 7, 8, 9, 10};
	std::vector<int> vec3 = sum_vecs(vec1, vec2);

	// print the resulting vector
	int size = vec3.size();
	for (int i = 0; i < size; i++) {
		std::cout << vec3[i] << " ";
	}
	std::cout << "\n";
	return 0;
}
