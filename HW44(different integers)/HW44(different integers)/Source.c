#include <stdio.h>

int main() {
	int N, count = 0, data[1001] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int input;
		scanf("%d", &input);
		if (!data[input]++) {
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}