#include "../includes/PhoneBook.hpp"

// Constructor
PhoneBook::PhoneBook() : count(0) {}

// Private Methods
int PhoneBook::getCount() {
    if (count > 7) {
        count = 0;
    }
    return count;
}

void PhoneBook::addCount() {
    count++;
}

std::string PhoneBook::formatString(std::string str){
    if (str.length() < 10) {
        str.resize(10, ' ');
        return str.substr(0, 10);
    }
    else {
        return str.substr(0, 9) + ".";
    }
    
}

bool PhoneBook::isNumeric(std::string str) {
    for (std::string::iterator i = str.begin(); i < str.end(); i++) {
        if (!isdigit(*i)) {
            return (false);
        }
    }
    return (true);
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
        std::cout << "|" << formatString(std::to_string(i + 1))
        << "|" << formatString(contacts[i].getFirstName())
        << "|" << formatString(contacts[i].getLastName())
        << "|" << formatString(contacts[i].getNickname())
        << "|" << std::endl;
        i++;
    }
    std::cout << "+----------+----------+----------+----------+" << std::endl;
}

void PhoneBook::displayIndexInPhoneBook(int i) {
    i--;
    std::cout << std::endl
    << "First Name: " << contacts[i].getFirstName() << std::endl
    << "Last Name: " << contacts[i].getLastName() << std::endl
    << "Nickname: " << contacts[i].getNickname() << std::endl
    << "Phone Number: " << contacts[i].getPhoneNumber() << std::endl;
}


// Public Methods
void PhoneBook::add() {

    int i = getCount();
    std::string pNumber;
    std::string fName;
    std::string lName;
    std::string nName;
    std::string dSecret;

    std::cout << "\n<<<<<<<<<<     ADDING A NEW CONTACT     >>>>>>>>>>" << std::endl;
    while (fName.empty()) {
        std::cout << "Enter first name: ";
        std::getline(std::cin, fName);
    }
    contacts[i].setFirstName(fName);

    while (lName.empty()) {
        std::cout << "Enter last name: ";
        std::getline(std::cin, lName);
    }
    contacts[i].setLastName(lName);

    while (nName.empty()) {
        std::cout << "Enter nickname: ";
        std::getline(std::cin, nName);
    }
    contacts[i].setNickname(nName);

    while (true) {
        std::cout << "Enter phone number: ";
        std::cin >> pNumber;
        std::cin.ignore(); //clears the input buffer
        if (!isNumeric(pNumber)) {
            std::cout << "Please enter numerals only!" << std::endl;
            continue;
        }
        else
            break;
    }
    contacts[i].setPhoneNumber(pNumber);

    while (dSecret.empty()) {
        std::cout << "Enter darkest secret: ";
        std::getline(std::cin, dSecret);
    }
    contacts[i].setDarkestSecret(dSecret);
    
    addCount();
    std::cout << "\n<<<<<<<<<<  SUCCESSFULLY ADDED CONTACT  >>>>>>>>>>" << std::endl
    << "First name: " << contacts[i].getFirstName() << std::endl
    << "Last name : " << contacts[i].getLastName() << std::endl
    << "Nickname: " << contacts[i].getNickname() << std::endl
    << "Phone number: " << contacts[i].getPhoneNumber() << std::endl;
    displayPhoneBook();
}



void PhoneBook::search() {
    displayPhoneBook();
    int index = -1;
    std::string input;

    while (true) {
        std::cout << "Enter an index to view full contact details: ";
        std::getline(std::cin, input);
        try {
            index = std::stoi(input);
            if (index > 8 || index < 1 || this->contacts[index - 1].isEmpty()) {
                throw std::out_of_range("Index is out of range.");
            }
            displayIndexInPhoneBook(index);
            return;
        }
        catch (const std::exception& e) {
            std::cout << "ERROR: " << e.what() << std::endl;
            continue;
        }

    }

}

void PhoneBook::exit() {
    std::cout << std::endl
    << "    _________  ____  ___  _____  ______" << std::endl
    << "   / ___/ __ \\/ __ \\/ _ \\/ _ ) \\/ / __/" << std::endl
    << "  / (_ / /_/ / /_/ / // / _  |\\  / _/  " << std::endl
    << "  \\___/\\____/\\____/____/____/ /_/___/  " << std::endl;
}

