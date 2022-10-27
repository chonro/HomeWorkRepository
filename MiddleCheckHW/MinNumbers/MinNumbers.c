#include <stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	printf("Введите первое число: ");
	scanf_s("%d", &a);
	printf("Введите второе число: ");
	scanf_s("%d", &b);

	int eq = equal(a, b);
	if (eq == 0) {
		int maxn = max(a, b);
		printf("Максимальное число: %d\n", maxn);
		int minn = min(a, b);
		printf("Минимальное число: %d\n", minn);
	}
	else printf("Числа равны!");
	return 0;
}
int max(int a, int b) {
	int maxnumb;
	if (a > b) maxnumb = a;
	else if (b > a) maxnumb = b;
	else maxnumb = a;
	return maxnumb;
}
int min(int a, int b) {
	int minnumb;
	if (a < b) minnumb = a;
	else if (b < a) minnumb = b;
	else minnumb = a;
	return minnumb;
}
int equal(int a, int b) {
	int eq;
	if (a == b) eq = 1;
	else eq = 0;

	return eq;
}
