#include <iostream>
#include <string>


struct FIO {
	std::string surname, name, patronymic;
};



struct sostavblud {
	std::string bludo1;
	std::string bludo2;
	std::string bludo3;
};
struct eatings {
	std::string name;
	int time;
	struct sostavblud menu;
};
struct famaly_members {
	std::string role;
	struct FIO fio;
	
};


int main() {
	struct eatings breakfast;
	breakfast.menu.bludo1 = "kasha";
	breakfast.menu.bludo2 = "xleb";
	breakfast.menu.bludo3 = "tea";
	breakfast.name = "breakfast";
	breakfast.time = 9;
	struct eatings lanch = { "lanch",13,{"sup","kartochka","kompot"} };
	struct eatings dinner = { "dinner",19,{"chiken","juice","rise"} };

	struct eatings my_eatings[4];
	my_eatings[0] = breakfast;
	my_eatings[1] = lanch;
	my_eatings[2] = dinner;
	my_eatings[3].name = "support";
	my_eatings[3].time = 11;
	my_eatings[3].menu = { "cake","kakao","panini" };
	for (int i = 0; i < 4; i++) {
	std::cout << my_eatings[i].menu.bludo1 << std::endl;

	}
	struct famaly_members* My_famaly_members;
	My_famaly_members = new struct famaly_members[3];
	My_famaly_members[0].role = "father";
	My_famaly_members[0].fio = {"Ivanov","Ivan","Ivanovich"};
	My_famaly_members[1].role = "mather";
	My_famaly_members[1].fio = { "Ivanova","Marfa","Marfavna"};
	My_famaly_members[2].role = "son";
	My_famaly_members[2].fio = { "Vasin","Petr","Ilyich" };
	for (int i = 0; i < 3; i++) {
		std::cout << My_famaly_members[i].role << std::endl;

	}
	return 0;
}