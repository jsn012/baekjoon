//https://www.acmicpc.net/problem/1026

#include <stdio.h>

int main(void) {
	int N, i, j, temp, add = 0;
	int arr[2][50];
	scanf("%d", &N);

	for (i = 0; i < 2; i++) {
		for (j = 0; j < N; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < N-1; j++) {
			if (arr[0][j] > arr[0][j + 1]) {
				temp = arr[0][j];
				arr[0][j] = arr[0][j + 1];
				arr[0][j + 1] = temp;
			}
			if (arr[1][j] < arr[1][j + 1]) {
				temp = arr[1][j];
				arr[1][j] = arr[1][j + 1];
				arr[1][j + 1] = temp;
			}
		}
	}

	for (i = 0; i < N; i++) {
		add += arr[0][i] * arr[1][i];
	}

	printf("%d", add);

	return 0;
}
