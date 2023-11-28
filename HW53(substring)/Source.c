#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* getPi(char* str) {
	int len = strlen(str);
	int* pi = (int*)calloc(len, sizeof(int));

	for (int i = 1, j = 0; i < len; i++) {
		while (j > 0 && str[i] != str[j]) {
			j = pi[j - 1];
		}

		if (str[i] == str[j]) {
			pi[i] = ++j;
		}
	}

	return pi;
}

char* KMP(const char* Str, const char* SubStr) {
	int* pi = getPi(SubStr);

	int str_len = strlen(Str);
	int sub_len = strlen(SubStr);

	for (int i = 0, j = 0; i < str_len; i++) {
		while (j > 0 && SubStr[j] != Str[i]) {
			j = pi[j - 1];
		}

		if (Str[i] == SubStr[j]) {
			if (++j >= sub_len) {
				return Str + i - sub_len + 1;
			}
		}
	}

	free(pi);
	return NULL;
}

int main() {
	char* str = "oxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxx";
	char sub[11];

	scanf("%s", sub);

	printf("%s\n", KMP(str, sub) ? "YES" : "NO");

	return 0;
}