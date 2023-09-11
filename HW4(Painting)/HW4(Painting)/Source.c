#include <stdio.h>

int get_overlap(int* L1, int* R1, int* L2, int* R2) {
	int left = *L1 > *L2 ? *L1 : *L2;
	int right = *R1 < *R2 ? *R1 : *R2;

	return left > right ? 0 : right - left + 1;
}

int main() {
	int L1, R1, L2, R2;

	scanf("%d %d %d %d", &L1, &R1, &L2, &R2);
	printf("%d\n", get_overlap(&L1, &R1, &L2, &R2));

	return 0;
}