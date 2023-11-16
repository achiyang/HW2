#include <stdio.h>

int main() {
	int N, smallest, arr[2001] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int input;
		scanf("%d", &input);
		arr[input] = 1;
	}

	for (smallest = 1; arr[smallest]; smallest++);

	printf("%d", smallest);

	return 0;
}
