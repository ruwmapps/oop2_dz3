#include <iostream>
#include <windows.h>

struct adress {
    std::string  sity;
    std::string  street;
    int number_house;
    int number_box;
    int post_index;
};

void newAdress(adress& adr) {
    std::cout << "Город: ";
    std::cin >> adr.sity;
    std::cout << "Улица: ";
    std::cin >> adr.street;
    std::cout << "Номер дома: ";
    std::cin >> adr.number_house;
    std::cout << "Номер квартиры: ";
    std::cin >> adr.number_box;
    std::cout << "Индекс: ";
    std::cin >> adr.post_index;
}

void getAdress(adress adr) {

    std::cout << "\n" 
        << "Город: " << adr.sity << "\n"
        << "Улица: " << adr.street << "\n"
        << "Номер дома: " << adr.number_house << "\n"
        << "Номер квартиры: " << adr.number_box << "\n"
        << "Индекс: " << adr.post_index << std::endl;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    adress adr1;

    newAdress(adr1);

    getAdress(adr1);
}