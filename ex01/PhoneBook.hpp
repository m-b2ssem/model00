#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
    Contact contacts[9];
    int contact_count;
    int keep_track;	

public:
    PhoneBook();
    void addContact(Contact contact);
    int displayContacts();
    void displayContact(int index);
};


#endif
