#include <stdio.h>

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, -1, 0, 1 };

int main() {
	int N, pos[2] = { 0 }, dir = 0;

	scanf("%d ", &N);

	while (N--) {
		char temp = getchar();
		if (temp == 'S') {
			pos[0] += dx[dir];
			pos[1] += dy[dir];
		}
		else if (temp == 'R') {
			dir = (dir + 1) % 4;
		}
	}

	printf("(%d, %d)", pos[0], pos[1]);

	return 0;
}