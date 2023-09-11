#include <stdio.h>

int pay(int* x, int* y, int* n) {
	int total = 0;
	if (*x * 3 >= *y) {
		total += *n / 3 * *y;
		total += *n % 3 * *x;
	}
	else {
		total = *n * *x;
	}
	return total;
}

int main() {
	int x, y, n;

	scanf("%d %d %d", &x, &y, &n);

	printf("%d\n", pay(&x, &y, &n));

	return 0;
}