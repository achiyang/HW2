#include <stdio.h>
#include <string.h>

int main() {
	int N, max_index = 0, n_S[100] = { 0 };
	char s_S[100][11] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		char temp[11];
		scanf("%s", temp);
		for (int i = 0; i < N; i++) {
			if (s_S[i][0] == 0) {
				strcpy(s_S[i], temp);
				n_S[i]++;
				break;
			}
			if (strcmp(s_S[i], temp) == 0) {
				n_S[i]++;
				break;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		if (n_S[i] > n_S[max_index]) {
			max_index = i;
		}
	}

	printf("%s", s_S[max_index]);
}