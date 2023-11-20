#include <stdio.h>

int main() {
	float value;

	scanf("%f", &value);

	value *= 10;

	if ((int)value % 10 <= 2) {
		printf("%d-", (int)value / 10);
	}
	else if ((int)value % 10 <= 6) {
		printf("%d", (int)value / 10);
	}
	else {
		printf("%d+", (int)value / 10);
	}

	return 0;
}