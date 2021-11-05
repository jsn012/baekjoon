//https://www.acmicpc.net/problem/11653

#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);

	for (int i = 2; i < num + 1; i++) {
		while (num % i == 0) {
			printf("%d\n", i);
			num /= i;
		}
	}

	return 0;
}
