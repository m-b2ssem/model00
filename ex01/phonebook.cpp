#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>

PhoneBook::PhoneBook() {
    this->contact_count = 1;
    this->keep_track = 1;
}

int findOldest(Contact contacts[9]) {
    int oldestIndex = 0;
    int oldest = contacts[0].getOldest();
    for (int i = 1; i < 9; i++) {
        if (contacts[i].getOldest() < oldest) {
            oldest = contacts[i].getOldest();
            oldestIndex = i;
        }
    }
    return oldestIndex;
}

void PhoneBook::addContact(Contact contact) {
    int oldestIndex = 0;
    if (this->contact_count < 9) {
        contact.setOldest(contact_count);
        this->contacts[this->contact_count] = contact;
        this->contact_count++;
        this->keep_track++;
    } else {
        contact.setOldest(keep_track);
        oldestIndex = findOldest(contacts);
        this->contacts[oldestIndex] = contact;
        this->keep_track++;
    }
}

void PhoneBook::displayContact(int index) {
    if (index >= 1 && index < this->contact_count) {
        std::cout << "First name: " << this->contacts[index].getFirstName() << std::endl;
        std::cout << "Last name: " << this->contacts[index].getLastName() << std::endl;
        std::cout << "Nickname: " << this->contacts[index].getNickname() << std::endl;
        std::cout << "Phone number: " << this->contacts[index].getPhoneNumber() << std::endl;
        std::cout << "Darkest secret: " << this->contacts[index].getDarkestSecret() << std::endl;
    } else {
        std::cout << "Invalid index" << std::endl;
    }
}

int PhoneBook::displayContacts() {
    if (this->contact_count == 1) {
        std::cout << "Phonebook is empty" << std::endl;
        return 0;
    }
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First name" << "|";
    std::cout << std::setw(10) << "Last name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    for (int i = 1; i < this->contact_count; i++) {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << this->contacts[i].getFirstName() << "|";
        std::cout << std::setw(10) << this->contacts[i].getLastName() << "|";
        std::cout << std::setw(10) << this->contacts[i].getNickname() << std::endl;
    }
    return 1;
}