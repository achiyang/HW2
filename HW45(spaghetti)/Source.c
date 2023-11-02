#include <stdio.h>

int main() {
	int N, M, spaghetti[101] = { 0 }, temp;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		scanf("%d", &temp);
		spaghetti[temp]++;
	}

	for (int i = 0; i < M; i++) {
		scanf("%d", &temp);
		if (spaghetti[temp]-- == 0) {
			printf("NO");
			return 0;
		}
	}

	printf("YES");

	return 0;
}