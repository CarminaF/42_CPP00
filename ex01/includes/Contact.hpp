#include <iostream>

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        // constructor
        Contact();
        // accessors
        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getPhoneNumber();
        // mutators
        void        setFirstName(std::string fName);
        void        setLastName(std::string lName); 
        void        setNickname(std::string nName);
        void        setPhoneNumber(std::string pNumber);
        void        setDarkestSecret(std::string dSecret);
};




#endif