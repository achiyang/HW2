#include <stdio.h>

int main() {
	int X, Y;

	scanf("%d.%d", &X, &Y);

	if (Y <= 2) {
		printf("%d-", X);
	}
	else if (Y <= 6) {
		printf("%d", X);
	}
	else {
		printf("%d+", X);
	}

	return 0;
}