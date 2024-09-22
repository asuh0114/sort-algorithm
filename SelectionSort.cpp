#include <stdio.h>

#define COUNT 10

int main() {
	int data[COUNT] = {
		3, 5, 1, 2, 4, 6, 7, 9, 8, 10
	};

	int temp;

	for (int i = 0; i < COUNT - 1; i++) {
		for (int j = i + 1; j < COUNT; j++) {
			if (data[i] > data[j]) {
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}

	for (int i = 0; i < COUNT; i++) {
		printf("%d ", data[i]);
	}

	return 0;
}