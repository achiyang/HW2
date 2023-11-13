#include <stdio.h>

int main() {
	int N, temp[2] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &temp[1]);
		if (temp[0] >= temp[1]) {
			break;
		}
		temp[0] = temp[1];
	}

	printf("%d", temp[0]);

	return 0;
}