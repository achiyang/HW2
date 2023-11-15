#include <stdio.h>
#include <string.h>

int check(char* str) {
	if (str[0] >= 'A' && str[0] <= 'G') {
		for (int i = 0; i < 2; i++) {
			if ((str[i] - 'A' + 2) % 7 != str[i + 1] - 'A') {
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int main() {
	char S[4];

	scanf("%s", S);

	printf("%s", check(S) ? "Yes" : "No");

	return 0;
}