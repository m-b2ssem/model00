#include "contact.cpp"
#include "phonebook.cpp"
#include <iomanip>
#include <iostream>


void Contact::setFirstName(std::string first_name) {
    this->first_name = first_name;
}

void Contact::setLastName(std::string last_name) {
    this->last_name = last_name;
}

void Contact::setNickname(std::string nickname) {
    this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() {
    return this->first_name;
}

std::string Contact::getLastName() {
    return this->last_name;
}

std::string Contact::getNickname() {
    return this->nickname;
}

std::string Contact::getPhoneNumber() {
    return this->phoneNumber;
}

std::string Contact::getDarkestSecret() {
    return this->darkestSecret;
}

PhoneBook::PhoneBook() : contact_count(0) {}


void PhoneBook::addContact(Contact contact) {
    if (this->contact_count < 8) {
        this->contacts[this->contact_count] = contact;
        this->contact_count++;
    } else {
        std::cout << "Phonebook is full" << std::endl;
    }
}

void PhoneBook::displayContact(int index) {
    if (index >= 0 && index < this->contact_count) {
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
    if (this->contact_count == 0) {
        std::cout << "Phonebook is empty" << std::endl;
        return 0;
    }
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First name" << "|";
    std::cout << std::setw(10) << "Last name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < this->contact_count; i++) {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << this->contacts[i].getFirstName() << "|";
        std::cout << std::setw(10) << this->contacts[i].getLastName() << "|";
        std::cout << std::setw(10) << this->contacts[i].getNickname() << std::endl;
    }
    return 1;
}
