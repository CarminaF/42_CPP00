#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0) {}

int PhoneBook::getCount() {
    return count;
}

void PhoneBook::addCount() {
    if (PhoneBook::count > 7) {
        count = 0;
    }
    else
        count++;
}

void PhoneBook::add() {
    int i = PhoneBook::getCount();
    std::string fName;
    std::string lName;
    std::string nName;
    std::string pNumber;
    std::string dSecret;

    std::cout << "\n<<<<<<<<<<     ADDING A NEW CONTACT     >>>>>>>>>>" << std::endl;
    while (fName.empty()) {
        std::cout << "Enter first name: ";
        std::getline(std::cin, fName);
    }
    PhoneBook::contacts[i].setFirstName(fName);

    while (lName.empty()) {
        std::cout << "Enter last name: ";
        std::getline(std::cin, lName);
    }
    PhoneBook::contacts[i].setLastName(lName);

    while (nName.empty()) {
        std::cout << "Enter nickname: ";
        std::getline(std::cin, nName);
    }
    PhoneBook::contacts[i].setNickname(nName);

    while (pNumber.empty()) {
        std::cout << "Enter phone number: ";
        std::getline(std::cin, pNumber);
    }
    PhoneBook::contacts[i].setPhoneNumber(pNumber);

    while (dSecret.empty()) {
        std::cout << "Enter darkest secret: ";
        std::getline(std::cin, dSecret);
    }
    PhoneBook::contacts[i].setDarkestSecret(dSecret);

    std::cout << "\n<<<<<<<<<<  SUCCESSFULLY ADDED CONTACT  >>>>>>>>>>" << std::endl
    << "First name: " << PhoneBook::contacts[i].getFirstName() << std::endl
    << "Last name : " << PhoneBook::contacts[i].getLastName() << std::endl
    << "Nickname: " << PhoneBook::contacts[i].getNickname() << std::endl
    << "Phone number: " <<PhoneBook::contacts[i].getPhoneNumber() << std::endl;
    PhoneBook::addCount();
    std::cout << PhoneBook::getCount() << std::endl;
}

std::string PhoneBook::format_string(std::string str){
    if (str.length() < 10) {
        str.resize(10, ' ');
        return str.substr(0, 10);
    }
    else {
        return str.substr(0, 9) + ".";
    }
    
}
void PhoneBook::displayPhoneBook(){
    int i = 0;
    std::cout << "   ___  __ ______  _  _________  ____  ____  __ __" << std::endl
            << "  / _ \\/ // / __ \\/ |/ / __/ _ )/ __ \\/ __ \\/ //_/" << std::endl
    << " / ___/ _  / /_/ /    / _// _  / /_/ / /_/ / ,<   " << std::endl
    << "/_/  /_//_/\\____/_/|_/___/____/\\____/\\____/_/|_|" << std::endl
    << "+----------+----------+----------+----------+" << std::endl
    << "|Index     |First Name|Last Name |Nickname  |" << std::endl;
    
    while (i < 8) {
        std::cout << "|" << format_string(std::to_string(i + 1))
        << "|" << format_string(contacts[i].getFirstName())
        << "|" << format_string(contacts[i].getLastName())
        << "|" << format_string(contacts[i].getNickname())
        << "|" << std::endl;
        i++;
    }
    std::cout << "+----------+----------+----------+----------+" << std::endl;
}
void PhoneBook::search() {
    displayPhoneBook();
    std::cout << "Search " << std::endl;
}
void PhoneBook::exit() {
    std::cout << std::endl
    << "    _________  ____  ___  _____  ______" << std::endl
    << "   / ___/ __ \\/ __ \\/ _ \\/ _ ) \\/ / __/" << std::endl
    << "  / (_ / /_/ / /_/ / // / _  |\\  / _/  " << std::endl
    << "  \\___/\\____/\\____/____/____/ /_/___/  " << std::endl;
}

