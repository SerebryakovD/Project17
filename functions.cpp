#include<iostream>

using namespace std;

void printParalell(int height, int width) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (i == 0 || j == 0 || i == height - 1 || j == width - 1) {
				cout << " *";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}

unsigned int getFactorial(int num) {
	int fact = 1;

	for (int i = 1; i <= num; i++) {
		fact *= i;
	}

	return fact;
}

int tripleMult(int num) {
	return num * num * num;
}

int getMax(int a, int b) {
	return a > b ? a : b;
}

bool isPositiveNumber(int num) {
	return num > 0;
}