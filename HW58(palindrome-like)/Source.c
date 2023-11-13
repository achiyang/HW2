#include <stdio.h>
#include <string.h>

int main() {
	int len;
	char S[21];

	scanf("%s", S);

	len = strlen(S);

	for (int i = 0;; i++) {
		if (S[len - i] != 'a' && S[len - i] != '\0') {
			break;
		}
		int is_palindrome = 1;
		for (int j = 0; j < (len - i) / 2; j++) {
			if (S[j] != S[len - 1 - i - j]) {
				is_palindrome = 0;
				break;
			}
		}
		if (is_palindrome) {
			printf("YES");
			return 0;
		}
	}

	printf("NO");

	return 0;
}