#include <stdio.h>

int main() {
	int N, count = 0, arr[1001] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int input;
		scanf("%d", &input);
		if (!arr[input]) {
			arr[input] = 1;
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}