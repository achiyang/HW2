#include <stdio.h>
#include <math.h>

int main() {
	int K, num = 0;

	scanf("%d", &K);

	for (int i = 0; i < K; i++) {
		int temp = num, count = 0;
		while (temp % 10 == 2) {
			temp /= 10;
			count++;
		}
		num += 2 * pow(10, count);

		temp = 2;
		while (count--) {
			num -= temp;
			temp *= 10;
		}
	}

	printf("%d", num);

	return 0;
}