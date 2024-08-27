#include "Contact.hpp"

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

int Contact::getOldest() {
    return this->oldest;
}


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

void Contact::setOldest(int oldest) {
    this->oldest = oldest;
}
