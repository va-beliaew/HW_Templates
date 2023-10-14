#include <iostream>
#include <vector>

// Вариант выполнения задания с использованием вектора. 
//Вариант с динамическим массивом в Main2.cpp

template<typename T>
class table {
public:
	table(int w, int h)  {
		widht = w;
		height = h;
		create();
	}
private:
	int widht, height;
	std::vector<T> v;
	void create() {
		for (int i = 0; i < (widht * height); ++i) {
			v.push_back(i);
		}
	}
public:
	size_t size() {
		return v.size();
	}
	T out(int i) {
		return v.at(i);
	}
	T *operator[] (int i) {
		return v.data() + (i*widht);
	}
	const T* operator[] (int i) const {
		return v.data() + (i * widht);
	}
};


int main() {
	auto test = table<int>(2, 3);	//(ширина таблицы, высота таблицы)
	test[1][0] = 34;				//[номер строки][номер столбца]
	test[0][1] = 12;
	for (int i = 0; i < test.size(); ++i) {
		std::cout << test.out(i) << " ";
	}
	std::cout << std::endl;
	std::cout << test[1][0] << "\n";
	return 0;
}