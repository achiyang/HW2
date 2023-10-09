#include <stdio.h>
#include <string.h>

void print_substring(const char* str, int start, int end) {
	int sublen = end - start + 1;
	char substr[10] = "\0";

	strncpy(substr, str + (start - 1), sublen);

	substr[sublen] = '\0';

	printf("%s", substr);

	return;
}

int main() {
	char* str = "beautiful";
	int L = 0, R = 0;

	scanf("%d %d", &L, &R);

	print_substring(str, L, R);

	return 0;
}
