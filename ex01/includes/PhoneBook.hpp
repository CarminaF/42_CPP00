#include "Contact.hpp"
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook {
    private:
        Contact     contacts[8];
        int         count;
        void        displayPhoneBook();
        void        addCount();
        int         getCount();
        std::string format_string(std::string str);
    public:
        PhoneBook();
        void    add();
        void    search();
        void    exit();

    // Add, Search, Exit
};

#endif