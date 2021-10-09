#include <stdio.h>

int main() {
	int n, i, j, num;
	int cnt = 0;

	scanf("%d", &n);	//개수 입력

	for (i = 0; i < n; i++) {	//n번만큼 반복
		scanf("%d", &num);	//숫자 입력
		for (j = 2; j < num+1; j++) {	//소수구하기
			if (num == j) {	//입력받은 숫자가 소수라면 소수 개수 카운트+1
				cnt++;
			}
			if (num % j == 0) {	//입력받은 숫자가 소수가 아니라면 반복문 탈출
				break;
			}
		}
	}
	printf("%d\n", cnt);	//소수 개수 출력

	return 0;
}
