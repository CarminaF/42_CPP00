#include <iostream>
#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

// Returns capitalized string without trailing white spaces
std::string format_command(std::string &str) {
    std::size_t start;
    std::size_t end;

    start = str.find_first_not_of(" \t\n\r\f\v");
    if (start == std::string::npos) {
        return str;
    }
    end = str.find_last_not_of(" \t\n\r\f\v");
    std::string substr = str.substr(start, end - start + 1);
    std::transform(substr.begin(), substr.end(), substr.begin(), ::toupper);
    return substr;
}

int main(void) {
    PhoneBook carminasPhoneBook;
    std::cout << "  ________   ___  __  ________  _____  _  ____ " << std::endl
     << " / ___/ _ | / _ \\/  |/  /  _/ |/ / _ |( )/ __/ " << std::endl
     << "/ /__/ __ |/ , _/ /|_/ // //    / __ ||/_\\ \\ " << std::endl
     << "\\___/_/ |_/_/|_/_/ _/_/___/_/|_/_/_|_| /___/ __ _" << std::endl
     << "  / _ \\/ // / __ \\/ |/ / __/ _ )/ __ \\/ __ \\/ //_/" << std::endl
     << " / ___/ _  / /_/ /    / _// _  / /_/ / /_/ / ,<   " << std::endl
     << "/_/  /_//_/\\____/_/|_/___/____/\\____/\\____/_/|_|" << std::endl
     << std::endl;
     
    while (true){ 
        std::string command;

        std::cout << "************************************************" << std::endl;
        std::cout << " 1 - 'ADD'    - to add a new contact to phone book" << std::endl;
        std::cout << " 2 - 'SEARCH' - to lookup contact in phone book" << std::endl;
        std::cout << " 3 - 'EXIT'   - to exit phone book" << std::endl;
        std::cout << "************************************************" << std::endl;
        std::cout << std::endl;
        std::cout << "Enter any of the commands above: ";
        std::getline(std::cin, command);
        if (command.empty()) {
            continue;
        }
        command = format_command(command);
        if (command == "ADD" or command == "1") 
            carminasPhoneBook.add();
        else if (command == "SEARCH" or command == "2") 
            carminasPhoneBook.search();
        else if (command == "EXIT" or command == "3") {
            carminasPhoneBook.exit();
            break;
        }
        std::cout << std::endl;
    }
    return (0);
}
