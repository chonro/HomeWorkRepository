#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int b_s;
	int k_s;
	int t_s;
	int N;
	int flag = 0;

	int b, k, t;
	printf("������� ����� �������: ");
	scanf_s("%d", &N);
	int bmax, kmax, tmax;
	if (N / 10 < 100) bmax = N / 10;
	else bmax = 100;
	if (N / 5 < 100) kmax = N / 5;
	else kmax = 100;
	tmax = 100;
	for (b = 1; b < bmax; b++) {
		for (k = 1; k < kmax; k++) {
			for (t = 1; t < tmax; t++) {
				if ((b + k + t == 100) && ((10 * b + 5 * k + 0.5 * t) == N)) {
					flag = 1;
					break;
				}
			}
			if (flag == 1)
				break;
		}
		if (flag == 1)
			break;
	}
	if (flag == 1) {
		b_s = 10 * b;
		k_s = 5 * k;
		t_s = 0.5 * t;
		printf("�����:\n");
		printf("-------------------------------------------------\n");
		printf("|��� �����  |  ���������� ����� |  ���������    |\n");
		printf("-------------------------------------------------\n");
		printf("|   ����    |       %4d	|   %4d ���.   |\n", b, b_s);
		printf("|  ������   |       %4d	|   %4d ���.   |\n", k, k_s);
		printf("|  ������   |       %4d	|   %4d ���.   |\n", t, t_s);
		printf("-------------------------------------------------\n");
		printf("|           |      100 �����    |   %d ������  |\n", N);
		printf("-------------------------------------------------\n");
	}
	else printf("��� ���������");
	return 0;
}