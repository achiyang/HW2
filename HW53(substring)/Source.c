#include <stdio.h>
#include <string.h>

int isSubstr(char* sub, char* str) {
	int sub_len = strlen(sub);
	int str_len = strlen(str);

	for (int i = 0; i <= str_len - sub_len; i++) {
		int is_sub_str = 1;
		for (int j = 0; sub[j] != '\0'; j++) {
			if (sub[j] != str[j + i]) {
				is_sub_str = 0;
				break;
			}
		}
		if (is_sub_str) {
			return 1;
		}
	}

	return 0;
}

int main() {
	char* str = "oxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxx";
	char sub[11];

	scanf("%s", sub);

	printf("%s", isSubstr(sub, str) ? "YES" : "NO");

	return 0;
}