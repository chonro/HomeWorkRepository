#include <iostream>
#include <string>

struct place_of_study {
    std::string vuz;
    std::string fakultet;
    int kurs;
};
struct books {
    std::string author, title, publishing;
    int year, lists, art;
};
struct jeans {
    int length, width;
    std::string color;
};
struct TV {
    std::string brand;
    int length, width;
};



struct place_of_study create_POS(std::string vuz, std::string fakultet, int kurs);

void create_book(struct books*);

struct jeans create_jeans();

struct TV create_TV(struct TV);


int main(){

    struct place_of_study pos1 = create_POS("politeh", "TS", 2);
    std::cout << pos1.vuz + " " << pos1.fakultet + " " << pos1.kurs << std::endl;

    struct books new_book;
    create_book(&new_book);
    std::cout << new_book.author + " " << new_book.art << " " << new_book.lists << std::endl;

    struct jeans my_jeans = create_jeans();
    std::cout << my_jeans.length << " " << my_jeans.width << " " << my_jeans.color << std::endl;
    //3
    struct TV new_TV;
    std::cout << "TV: input length:";
    std::cin >> new_TV.length;
    std::cout << "TV: input brand:";
    std::cin >> new_TV.brand;
    std::cout << "TV: input width:";
    std::cin >> new_TV.width;

    struct TV copy_new_TV = create_TV(new_TV);
    std::cout << copy_new_TV.length << " " << copy_new_TV.brand << " " << copy_new_TV.width << std::endl;
return 0;
}
struct place_of_study create_POS(std::string m_vuz, std::string m_fakultet, int m_kurs) {
    struct place_of_study my_pos;
    my_pos.vuz = m_vuz;
    my_pos.fakultet = m_fakultet;
    my_pos.kurs = m_kurs;
    return my_pos;
}
void create_book(struct books* new_book) {
    (*new_book).author = "Gogol";
    (*new_book).art = 1251;
    (*new_book).title = "Viy";
    (*new_book).lists =150 ;
    (*new_book).publishing = "ast";
    (*new_book).year = 2001;
}
struct jeans create_jeans() {
    struct jeans new_jeans;
    
    std::cout << "jeans: input length:";
    std::cin >> new_jeans.length;
    std::cout << "jeans: input width:";
    std::cin >> new_jeans.width;
    std::cout << "jeans: input color:";
    std::cin >> new_jeans.color;

    return new_jeans;
}
struct TV create_TV(struct TV my_TV) {
    struct TV new_TV;
    new_TV.brand = my_TV.brand;
    new_TV.length = my_TV.length;
    new_TV.width = my_TV.width;
    return new_TV;
}


