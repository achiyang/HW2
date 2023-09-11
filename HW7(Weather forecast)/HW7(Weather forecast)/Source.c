#include <stdio.h>
#include <string.h>

void print_weather_info(int N, char* S) {
	printf("%s", S[N - 1] == 'o' ? "Yes" : "No");
}

int main() {
	char S[8];
	int N;

	scanf("%d %s", &N, S);
	print_weather_info(N, S);

	return 0;
}