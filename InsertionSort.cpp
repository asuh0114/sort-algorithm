#include <stdio.h>

#define COUNT 10

int main() {
	int data[COUNT] = {
		3, 5, 1, 2, 4, 6, 7, 9, 8, 10
	};
	int temp;

	for (int i = 1; i < COUNT; i++) {
		int j = i - 1;
		while (j >= 0 && data[j] > data[j + 1]) {
			temp = data[j];
			data[j] = data[j + 1];
			data[j + 1] = temp;
			j--;
		}
	}
	
	for (int i = 0; i < COUNT; i++) {
		printf("%d ", data[i]);
	}
	return 0;
}