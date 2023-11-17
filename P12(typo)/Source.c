#include <stdio.h>

int main() {
	int diff_index[2] = { 0 }, diff_count = 0;
	char S[201], T[201];

	scanf("%s", S);
	scanf("%s", T);

	for (int i = 0; S[i] != '\0'; i++) {
		if (S[i] != T[i]) {
			if (diff_count == 2) {
				printf("NO\n");
				return 0;
			}
			diff_index[diff_count++] = i;
		}
	}

	if (diff_count == 0 || (diff_count == 2 && S[diff_index[0]] == T[diff_index[1]] && S[diff_index[1]] == T[diff_index[0]])) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return 0;
}