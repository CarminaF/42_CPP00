#include "../includes/Contact.hpp"

Contact::Contact() : firstName (""), lastName (""), nickName (""), phoneNumber(""), darkestSecret("") {
};

bool    Contact::isEmpty() {
    if (this->firstName.empty() ||
        this->lastName.empty() ||
        this->nickName.empty() ||
        this->phoneNumber.empty()) {
            return (true);
    }
    return (false);
}
void Contact::setFirstName(std::string fName) {
    firstName = fName;
}
void Contact::setLastName(std::string lName) {
    lastName = lName;
}
void Contact::setNickname(std::string nName) {
    nickName = nName;
}
void Contact::setPhoneNumber(std::string pNumber) {
    phoneNumber = pNumber;
}
void Contact::setDarkestSecret(std::string dSecret) {
    darkestSecret = dSecret;
}
std::string Contact::getFirstName() {
    return firstName;
}
std::string Contact::getLastName() {
    return lastName;
}
std::string Contact::getNickname() {
    return nickName;
}
std::string Contact::getPhoneNumber() {
    return phoneNumber;
}