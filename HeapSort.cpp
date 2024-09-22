#include <stdio.h>

#define COUNT 10

int main() {
	int data[COUNT] = { 5, 3, 8, 4, 9, 1, 6, 2, 7, 10 };
	
	for (int i = 1; i < COUNT; i++) {
		int child = i;
		do {
			int root = (child - 1) / 2;
			if (data[root] < data[child]) {
				int temp = data[root];
				data[root] = data[child];
				data[child] = temp;
			}
			child = root;
		} while (child != 0);
	}

	for (int i = COUNT - 1; i >= 0; i--) {
		int temp = data[0];
		data[0] = data[i];
		data[i] = temp;

		int root = 0;
		int child = 1;
		do {
			child = 2 * root + 1;
			if (child < i - 1 && data[child] < data[child + 1]) {
				child++;
			}
			if (child < i && data[root] < data[child]) {
				temp = data[root];
				data[root] = data[child];
				data[child] = temp;
			}
			root = child;
		} while (child < i);
	}

	for (int i = 0; i < COUNT; i++) {
		printf("%d ", data[i]);
	}

	return 0;
}