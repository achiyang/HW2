#include <stdio.h>
#include <math.h>

double max(double a, double b) {
	return a > b ? a : b;
}

int main() {
	int N, point[10][2] = { 0 };
	double max_distance = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &point[i][0], &point[i][1]);
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			double distance = sqrt(pow(abs(point[i][0] - point[j][0]), 2) + pow(abs(point[i][1] - point[j][1]), 2));
			max_distance = max(max_distance, distance);
		}
	}

	printf("%.10lf", max_distance);

	return 0;
}