#include <stdio.h>

int main() {
	char player[3][100] = { 0 };
	int index[3] = { 0 };

	for (int i = 0; i < 3; i++) {
		scanf(" %s", player[i]);
	}

	int current_player = 0;
	while (1) {
		if (player[current_player][index[current_player]] == 0) {
			break;
		}
		current_player = player[current_player][index[current_player]++] - 'a';
	}

	char* winner;
	switch (current_player) {
	case 0:
		winner = "Alice";
		break;
	case 1:
		winner = "Bob";
		break;
	case 2:
		winner = "Charile";
		break;
	default:
		return -1;
	}

	printf("%s\n", winner);

	return 0;
}