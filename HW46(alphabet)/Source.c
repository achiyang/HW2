#include <stdio.h>

int main() {
	int N, K, alphabet[26] = { 0 };
	char temp;

	scanf("%d %d ", &N, &K);

	for (int i = 0; i < N; i++) {
		while ((temp = getchar()) != '\n' && temp != EOF) {
			alphabet[temp - 'a']++;
		}
	}

	int is_first = 1;
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] == K) {
			if (is_first) {
				printf("%c", 'a' + i);
				is_first = 0;
			}
			else {
				printf(", %c", 'a' + i);
			}
		}
	}

	return 0;
}