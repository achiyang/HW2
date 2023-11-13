#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, temp, num[10] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i < N * 4 - 1; i++) {
		scanf("%d", &temp);
		num[temp]++;
	}

	for (int i = 1; i <= N; i++) {
		if (num[i] == 3) {
			printf("%d", i);
			break;
		}
	}

	return 0;
}