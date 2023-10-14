#include <iostream>
#include <vector>

template<typename Ty>
Ty operator*(Ty left, Ty right) {
	int N = left.size();
	for (int i = 0; i < N; ++i) {
		left[i] = left[i] * right[i];
	}
	return left;
}

template <typename Type>
Type multiply(Type k) {
		k = k * k;
	return k;
}

int main() {
	int n = 4;
	std::cout << "[IN]: " << n << std::endl;
	n = multiply(n);
	std::cout << "[OUT]: " << n << std::endl;
	std::vector<int> v{ 0, -1, 2, 3 };
	std::cout << "[IN]: ";
	for (int n : v) {
		std::cout << n << " ";
	}
	std::cout << std::endl;
	v = multiply(v);
	std::cout << "[OUT]: ";
	for (int n : v) {
		std::cout << n << " ";
	}
	std::cout << std::endl;
	return 0;
}