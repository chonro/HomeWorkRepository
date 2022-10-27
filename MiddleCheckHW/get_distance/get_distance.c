#include <stdio.h>
#include <locale.h>
#include <math.h>
float length(int x1, int y1, int x2, int y2)
{
	float rez;
	rez = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	return rez;
}
int main() {
	setlocale(LC_ALL, "rus");
	int x1, x2, y1, y2;
	printf("Задайте координаты первой точки x1,y1:");
	scanf_s("%d %d", &x1, &y1);
	printf("Задайте координаты второй точки x2,y2:");
	scanf_s("%d  %d", &x2, &y2);
	printf("x1=%d y1=%d x2=%d y2=%d", x1, y1, x2, y2);

	float rez = length(x1, y1, x2, y2);
	printf("Длина отрезка: %f", rez);
	return 0;
}