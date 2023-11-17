#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, K;

	scanf("%d ", &N);

	char* S = (char*)malloc(sizeof(char) * (N + 1));
	fgets(S, N + 1, stdin);
	S[N] = '\0';

	scanf(" %d", &K);

	for (int i = 0; i < N; i++) {
		if (S[i] + K <= 127) {
			S[i] += K;
		}
	}

	printf("%s", S);

	free(S);

	return 0;
}