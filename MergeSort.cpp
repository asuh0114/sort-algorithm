#include <stdio.h>

#define COUNT 10

int main() {
	int data[COUNT] = { 5, 3, 8, 4, 9, 1, 6, 2, 7, 10 };

	int temp[COUNT] = { 0, };
	int i, j, k;
	int left, right, mid;

	for (i = 1; i < COUNT; i *= 2) {
		for (j = 0; j < COUNT; j += i * 2) {
			left = j;
			mid = j + i;
			right = j + i * 2;

			if (mid > COUNT) {
				mid = COUNT;
			}
			if (right > COUNT) {
				right = COUNT;
			}

			k = left;
			while (left < mid && mid < right) {
				if (data[left] < data[mid]) {
					temp[k++] = data[left++];
				}
				else {
					temp[k++] = data[mid++];
				}
			}

			while (left < mid) {
				temp[k++] = data[left++];
			}
			while (mid < right) {
				temp[k++] = data[mid++];
			}
		}

		for (k = 0; k < COUNT; k++) {
			data[k] = temp[k];
		}
	}
	
	for (i = 0; i < COUNT; i++) {
		printf("%d ", data[i]);
	}

	return 0;
}