#include <iostream>
#include <vector>
#include <algorithm>

class Functor {
private:
	int count = 0;
	int sum = 0;
public:
	void operator() (const int& n) {
		if (n % 3 == 0) {
			sum += n;
			count++;
		}
	}
	int get_sum() {
		return sum;
	}

	int get_count() {
		return count;
	}
};

int main() {
	std::vector<int> v = {1,3,4,-3,5,12,17,22,21,6};
	Functor funct;
	std::cout << "[IN]: ";
	for (int n : v) {
		std::cout << n << ' ';
	}
	std::cout << std::endl;
	funct = std::for_each(v.begin(), v.end(), funct);
	std::cout << "[OUT] get_sum() = " << funct.get_sum() << std::endl;
	std::cout << "[OUT] get_count() = " << funct.get_count() << std::endl;


	return 0;
}