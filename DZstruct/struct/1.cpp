#include <iostream>
#include <string>
//1 задание 1 часть ,объ€вление структур 
struct scafs {
    int height, depth, width;
};
struct books {
    std::string author, title, publishing;
    int year, lists, art;
};
struct bzyk {
    int protein, fats, carbohydrate, calories;
     
};
struct FIO {
    std::string surname, name, patronymic;
};
struct noth {
    int lists, cellsize;
    std::string color;
};
struct date {
    int day, month, year;
};
struct jeans {
    int length, width;
    std::string color;
};
struct TV {
    std::string brand;
    int length, width;
};
struct bodyparameters {
    int height,weight ,waist;
};
struct employee {
    struct date borndata;
    struct FIO fio;
    float oklad;
    int un;
    std::string prof;

};
struct bludo {
    std::string name;
    int weigth;
    struct bzyk BZYK;
};
struct place_of_study {
    std::string vuz;
    std::string fakultet;
    int kurs;
};



struct students {
    struct FIO fio;
    struct date borndata;
    struct place_of_study Place_Of_Study;
    int ID;
};
struct pacient {
    struct date databorn;
    std::string vrah;
    std::string diagnoz;
    struct FIO fio;
};
int main(void) {
    setlocale(LC_ALL, "rus");
    struct scafs comod = { 90,40,120 };
    std::cout << "Comod  height: " << comod.height << "   depth: " << comod.depth << "   width:  " << comod.width << "\n";
    struct books book = { "Tosltoy","War and piece","ast",1900,2000,2 };
    std::cout << "book   author: " << book.author << "   title:  " << book.title << "   publishing:  " << book.publishing << "   year:  " << book.year << "   lists:  " << book.lists << "   art:  " << book.art << "\n";
    struct bzyk bzyk1 = { 10,5,50,500 };
    std::cout << "Ѕ∆”    protein: " << bzyk1.protein << "   fats:  " << bzyk1.fats << "   carbohydrate:  " << bzyk1.carbohydrate << "   calories:  " << bzyk1.calories << "\n";
    struct  FIO fio = { "Alex","Alex","Alex" };
    std::cout << "fio    surname:  " << fio.surname << "   name:  " << fio.name << "   patronymic:  " << fio.patronymic << "\n";
    struct  noth noth1 = { 24,1024,"gray" };
    std::cout << "noth   lists:  " << noth1.lists << "   cellsize:  " << noth1.cellsize << "   color:  " << noth1.color << "\n";
    struct  date date1 = { 17,11,2004 };
    std::cout << "date   day:  " << date1.day << "   month:  " << date1.month << "   year:  " << date1.year << "\n";
    struct  TV TV1 = { "70","100","LG" };
    std::cout << "TV     length:  " << TV1.length << "   width:  " << TV1.width << "   color:  " << TV1.brand << "\n";
    struct  bodyparameters bodyparameters1 = { 70,179,62 };
    std::cout << "bodyparameters waist:  " << bodyparameters1.waist << "   height:  " << bodyparameters1.height << "   weight:  " << bodyparameters1.weight << "\n";

    
    
    
    
    
    
    struct employee em = { date1,fio,50000.3,121518,"dvornik" };
    std::cout << em.fio.name + "\n";

    struct bzyk bzyk2 = { 10,100,58,300 };
    struct bludo bludo1 = { "tartar",200,bzyk2 };
    std::cout << bludo1.name + " " << bludo1.BZYK.calories << "\n";

    struct students students1;
    students1.fio.name = "ivan";
    students1.fio.surname = "paykov";
    students1.fio.patronymic = "sergeevich";
    students1.borndata={17,10,2004};
    students1.Place_Of_Study.fakultet = "IITMM";
    students1.Place_Of_Study.kurs = 1;
    students1.Place_Of_Study.vuz = "UNN";
    std::cout << students1.Place_Of_Study.vuz + " " << students1.Place_Of_Study.fakultet + " kurs:"<< students1.Place_Of_Study.kurs << std::endl;

    struct date date2 = { 12,4,2000 };
    struct pacient sasha;
    sasha.databorn = date2;
    sasha.vrah = "petrov";
    sasha.diagnoz = "orvi";
    sasha.fio = { "paykov","ivan","sergeevich" };
    std::cout << sasha.fio.surname + " " << sasha.fio.name + " " << sasha.fio.patronymic << std::endl;
    
    
    
    
    
    return 0;
}