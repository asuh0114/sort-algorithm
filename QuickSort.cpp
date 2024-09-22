#include <stdio.h>

#define COUNT 10

int main() {
	int data[COUNT] = { 5, 3, 8, 4, 9, 1, 6, 2, 7, 10 };
	
	int i, j, k;
	int left, right, pivot;
	int temp;

	for (i = 0; i < COUNT; i++) {
		for (j = i + 1; j < COUNT; j++) {
			if (data[i] > data[j]) {
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}

	for (i = 0; i < COUNT; i++) {
		printf("%d ", data[i]);
	}
	
	return 0;
}