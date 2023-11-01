#include <stdio.h>

int main() {
	int N, count_1 = 0, count_2 = 0, A[1001] = { 0 };

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		int temp;
		scanf("%d", &temp);
		A[temp] = i;
	}
	for (int i = 1; i <= N; i++) {
		int temp;
		scanf("%d", &temp);
		if (A[temp]) {
			if (A[temp] == i) {
				count_1++;
			}
			else {
				count_2++;
			}
		}
	}

	printf("%d\n%d", count_1, count_2);

	return 0;
}