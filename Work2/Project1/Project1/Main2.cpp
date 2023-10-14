#include <iostream>
#include <vector>

// «адание выполнено с использованием динамического массива. 
//¬ариант с использованием вектора в Main.cpp

/*template<typename T>
class table {
public:
	table(int w_, int h_) {
		widht = w_;
		height = h_;
		arr = new T * [height];
		for (int i = 0; i < height; ++i) {
			arr[i] = new T[widht]{};
		}
	}
	~table() {
		for (int i = 0; i < height; ++i) {
			delete[] this->arr[i];
		}
		delete[] this->arr;
	}
private:
	int widht, height;
	T** arr;
public:
	void size(int* w, int* h) const {
		*w = widht;
		*h = height;
	}
	T out(int i, int j) {
		return this->arr[i][j];
	}
	T* operator[] (int i) {
		return this->arr[i];
	}
	const T* operator[] (int i) const {
		return this->arr[i];
	}
};


int main() {
	int* w = new int;
	int* h = new int;
	auto test = table<int>(2, 3);   //(ширина таблицы, высота таблицы)
	test[1][0] = 34;				//[номер строки][номер столбца]
	test[0][1] = 12;
	test.size(w, h);
	for (int i = 0; i < *h; ++i) {
		for (int j = 0; j < *w; ++j) {
			std::cout << test.out(i, j) << " ";
		}
		std::cout << std::endl;
	}
	std::cout << test[1][0];
	delete w;
	delete h;
	return 0;
}*/