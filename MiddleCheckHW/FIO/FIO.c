#include<stdio.h>
#include<locale.h>
//#include<malloc.h>
int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	char name[40];
	char surname[40];
	char patronymic[40];
	printf("Введите ваше имя:");
	gets(name);
	printf("Введите вашу фамилию:");
	gets(surname);
	printf("Введите ваше отчество:");
	gets(patronymic);
	//printf("%s %s %s", name, surname, patronymic);
	print_fio(name, surname, patronymic);
	return 0;
}
int print_fio(char* name, char* surname, char* patronymic) {
	char n1, s1, p1;
	n1 = toupper(name[0]);
	s1 = toupper(surname[0]);
	p1 = toupper(patronymic[0]);
	char fio[] = { toupper(name[0]) ,toupper(surname[0]) ,toupper(patronymic[0]) ,'\0' };
	//printf("Ваши инициалы:%c%c%c",n1,s1,p1);
	printf("Ваши инициалы:%s", fio);

}