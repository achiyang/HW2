#include <stdio.h>
#include <string.h>

void get_substr(int* start, int* end) {
	const char* str = "beautiful";
	char substr[10];
	int sublen = *end - *start + 1;

	strncpy(substr, str + *start - 1, sublen);

	substr[sublen] = '\0';

	printf("%s", substr);

	return;
}

int main() {
	int L, R;

	scanf("%d %d", &L, &R);
	get_substr(&L, &R);

	return 0;
}
