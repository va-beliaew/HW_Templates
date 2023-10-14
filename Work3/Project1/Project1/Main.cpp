#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>



int main() {
	int sum = 0;
	int count = 0;
	std::vector<int> v = { 1, 3, 12, 15, 17, 20, 55, 33, 41, 8, 5, 28, 68 };
	std::cout << "[IN]: ";
	for (int n : v) {
		std::cout << n << ' ';
	}
	std::cout << std::endl;
	auto summ = [&sum, v ](int i) {
		if ((i % 3) == 0) {
			sum += i;
		}
	};
	auto get_sum = [&sum, v, summ]() {
		int summa;
		std::for_each(v.begin(), v.end(), summ);
		summa = sum;
		sum = 0;
			return summa;
	};
	auto countf = [&count, v](int i) {
		if ((i % 3) == 0) {
			count += 1;
		}
		};
	auto get_count = [&count, v, countf]() {
		int counter;
		std::for_each(v.begin(), v.end(), countf);
			counter = count;
		count = 0;
		return counter;
	};
	std::cout << "[OUT]: " << "get_sum() = " << get_sum() << std::endl;
	std::cout << "[OUT]: " << "get_count() = " << get_count() << std::endl;

	return 0;
}