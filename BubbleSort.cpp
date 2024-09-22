#include <stdio.h>

#define COUNT 10

int main() {
	int data[COUNT] = {
		3, 5, 1, 2, 4, 6, 7, 9, 8, 10
	};

	int temp = 0;

	for (int i = 0; i < COUNT - 1; i++) {
		for (int j = 0; j < COUNT - 1 - i; j++) {
			if (data[j] > data[j + 1]) {
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < COUNT; i++) {
		printf("%d ", data[i]);
	}

	return 0;
}