#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>
#include <string>


void addContact(PhoneBook &phoneBook) {
    Contact newContact;
    std::string input;

    std::cout << "Enter First Name: ";
    std::getline(std::cin, input);
    newContact.setFirstName(input);

    std::cout << "Enter Last Name: ";
    std::getline(std::cin, input);
    newContact.setLastName(input);

    std::cout << "Enter Nickname: ";
    std::getline(std::cin, input);
    newContact.setNickname(input);

    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, input);
    newContact.setPhoneNumber(input);

    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, input);
    newContact.setDarkestSecret(input);

    phoneBook.addContact(newContact);
}

int stringToInt(const std::string& str) {
    std::istringstream iss(str);
    int num;
    if (!(iss >> num)) {
        std::cout << "Invalid input" << std::endl;
        return -1;
    }
    iss >> num;
    return num;
}

int main() {
    PhoneBook phoneBook;
    std::string command;
    int checker = 0;


    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD") {
            addContact(phoneBook);
        } else if (command == "SEARCH") {
            checker = phoneBook.displayContacts();
            if (checker == 0) {
                continue;
            }
            std::cout << "Enter index to view details: ";
            std::getline(std::cin, command);
            int index = stringToInt(command);
            if (index == -1) {
                continue;
            }
            phoneBook.displayContact(index);
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command." << std::endl;
        }
    }

    return 0;
}

    /*for (int i = 0; i < 8; i++)
    {
        Contact contact;
        contact.setFirstName("John");
        contact.setLastName("Doe");
        contact.setNickname("JD");
        contact.setPhoneNumber("1234567890");
        contact.setDarkestSecret("ee");
        phoneBook.addContact(contact);
    }*/
