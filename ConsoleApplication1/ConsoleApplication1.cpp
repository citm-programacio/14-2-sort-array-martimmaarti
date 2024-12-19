#include <iostream>
using namespace std;

const int arraySize = 10;

void mysort(int* unsorted, int*& sorted) {
}

void printArray(const int* a, int size) {
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int u[10]{ 0,8,1,2,4,5,5,9,20,15 };
	int* s = new int[10];

	printArray(u, arraySize);

	mysort(u, s);
	printArray(s, arraySize);

}


