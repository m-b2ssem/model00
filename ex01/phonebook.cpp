#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.cpp"

class PhoneBook {
private:
    Contact contacts[8];
    int contact_count;

public:
    PhoneBook();
    void addContact(Contact contact);
    int displayContacts();
    void displayContact(int index);
};






#endif // PHONEBOOK_HPP
