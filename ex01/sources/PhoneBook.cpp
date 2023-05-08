#include "../includes/PhoneBook.hpp"

void PhoneBook::add() {
    int i = 0;

    if (&PhoneBook::contacts[i] != NULL) {
          std::cout <<  "Hello" << std::endl;
    }
    std::cout << std::endl;
    std::cout << "<<<<< ADDING NEW CONTACT >>>>> " << std::endl;
    

    std::cout << "Enter a new name: " << std::endl;
}

void PhoneBook::displayPhoneBook(){
    std::cout << "Display phone book" << std::endl;
}
void PhoneBook::search() {
    displayPhoneBook();
    std::cout << "Search " << std::endl;
}
void PhoneBook::exit() {
    std::cout << std::endl;
    std::cout << "    _________  ____  ___  _____  ______" << std::endl;
    std::cout << "   / ___/ __ \\/ __ \\/ _ \\/ _ ) \\/ / __/" << std::endl;
    std::cout << "  / (_ / /_/ / /_/ / // / _  |\\  / _/  " << std::endl;
    std::cout << "  \\___/\\____/\\____/____/____/ /_/___/  " << std::endl;
}