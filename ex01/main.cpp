#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

// Returns capitalized string without trailing white spaces
std::string format(std::string str) {
    int i = 0;
    int j = 0;

    while (std::isspace(str[i])) {
        i++;
    }
    while (!std::isspace(str[i])) {
        str[j] = std::toupper(str[i]);
        i++;
        j++;
    }
    str[j] = '\n';
    return (str);
}

int main(void) {
    std::cout << "  ________   ___  __  ________  _____  _  ____ " << std::endl;
    std::cout << " / ___/ _ | / _ \\/  |/  /  _/ |/ / _ |( )/ __/ " << std::endl;
    std::cout << "/ /__/ __ |/ , _/ /|_/ // //    / __ ||/_\\ \\ " << std::endl;
    std::cout << "\\___/_/ |_/_/|_/_/ _/_/___/_/|_/_/_|_| /___/ __ _" << std::endl;
    std::cout << "  / _ \\/ // / __ \\/ |/ / __/ _ )/ __ \\/ __ \\/ //_/" << std::endl;
    std::cout << " / ___/ _  / /_/ /    / _// _  / /_/ / /_/ / ,<   " << std::endl;
    std::cout << "/_/  /_//_/\\____/_/|_/___/____/\\____/\\____/_/|_|" << std::endl;
    std::cout << std::endl;
    while (1){ 
        std::string command;
        PhoneBook carminasPhoneBook;

        std::cout << "************************************************" << std::endl;
        std::cout << " 'ADD'    - to add a new contact to phone book" << std::endl;
        std::cout << " 'SEARCH' - to lookup contact in phone book" << std::endl;
        std::cout << " 'EXIT'   - to exit phone book" << std::endl;
        std::cout << "************************************************" << std::endl;
        std::cout << std::endl;
        std::cout << "Enter any of the commands above: ";
        std::cin >> command;
        command = format(command);
        if (command == "ADD") {
            carminasPhoneBook.add();
        }
        else if (command == "SEARCH") {
            carminasPhoneBook.search();
        }
        else if (command == "EXIT") {
            carminasPhoneBook.exit();
            break;
        }
        std::cout << std::endl;
    }
}
