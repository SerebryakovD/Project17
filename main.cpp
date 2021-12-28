#include<iostream>
#include"functions.h"

using namespace std;

int main() {
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };

	for (int i = 0; i < (10 / 2); i++) {
		int temp = arr[i];
		arr[i] = arr[(10 - 1) - i];
		arr[(10 - 1) - i] = temp;
	}

	for (int i = 0; i < 10; i++) {
		cout << " " << arr[i];
	}
}


