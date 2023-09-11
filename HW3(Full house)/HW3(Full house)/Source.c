#include <stdio.h>

int is_fullhouse(int* counts) {
	int count[2] = { 0 };
	for (int i = 0; i < 15; i++) {
		if (counts[i] == 3) {
			count[0]++;
		}
		if (counts[i] == 2) {
			count[1]++;
		}
	}
	return count[0] && count[1] ? 1 : 0;
}

int main() {
	int cards[5];
	int counts[15] = { 0 };

	for (int i = 0; i < 5; i++) {
		scanf("%d", &cards[i]);
		counts[cards[i]]++;
	}

	if (is_fullhouse(counts))
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}