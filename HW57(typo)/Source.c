#include <stdio.h>
#include <string.h>

int main(){
	int diff_count = 0, diff_index[2];
	char S[201], T[201];

	scanf("%s", S);
	scanf("%s", T);

	int len = strlen(S);

	if (len != strlen(T)) {
		printf("NO");
		return 0;
	}

	if (strcmp(S, T) == 0) {
		printf("YES");
		return 0;
	}

	for (int i = 0; i < len; i++) {
		if (S[i] != T[i]) {
			diff_count++;
			if (diff_count > 2) {
				printf("NO");
				return 0;
			}
			diff_index[diff_count - 1] = i;
		}
	}
	
	if (diff_count == 2 && S[diff_index[0]] == T[diff_index[1]] && S[diff_index[1]] == T[diff_index[0]]) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return 0;
}