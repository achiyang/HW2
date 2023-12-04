#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void swap(char* char_1, char* char_2) {
	char temp = *char_1;
	*char_1 = *char_2;
	*char_2 = temp;
}

void print_permutation(char* str, int start, int end) {
	if (start == end) {
		printf("%s\n", str);
		return;
	}

	bool is_used[26] = { 0 };
	for (int i = start; i <= end; i++) {
		if (!is_used[str[i] - 'a']) {
			is_used[str[i] - 'a'] = true;
			if(i != start) swap(&str[start], &str[i]);
			print_permutation(str, start + 1, end);
			if(i != start) swap(&str[start], &str[i]);
		}
	}
}

int main() {
	char S[11];

	scanf("%s", S);

	int len = strlen(S);

	print_permutation(S, 0, len - 1);

	return 0;
}