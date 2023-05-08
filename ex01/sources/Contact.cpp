#include "../includes/Contact.hpp"

void Contact::setFirstName(std::string fName) {
    firstName = fName;
}
void Contact::setLastName(std::string lName) {
    lastName = lName;
}
void Contact::setNickname(std::string nName) {
    nickname = nName;
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
    return nickname;
}
std::string Contact::getPhoneNumber() {
    return phoneNumber;
}