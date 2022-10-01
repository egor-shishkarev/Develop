#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h.>

int verificationFloatScanf() {
	float readValues = 0;
	while (true) {
		int correctlyReadValues = scanf("%f", &readValues);
		while (getchar() != '\n') {
		}
		if (correctlyReadValues == 1) {
			break;
		}
		printf("Ошибка ввода. Введите целочисленное значение!\n");
	}
	return readValues;
}

bool isPointInArea(float x, float y) {
	x -= 3;
	y -= 5;
	return (x) >= 0 && (pow(x, 2) + pow(y, 2) - 4) <= 0;
}

int main() {
	setlocale(LC_ALL, ".1251");
	printf("Ввеидите два значения, для которых хотите проверить логичсекое выражение");
	printf("\nВведите x-координату => ");
	float x = verificationFloatScanf();
	printf("Введите y-координату => ");
	float y = verificationFloatScanf();
	printf(isPointInArea(x, y) ? "true" : "flase");
}