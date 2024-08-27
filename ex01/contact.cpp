#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
public:
    void setFirstName(std::string first_name);
    void setLastName(std::string last_name);
    void setNickname(std::string nickname);
    void setPhoneNumber(std::string phoneNumber);
    void setDarkestSecret(std::string darkestSecret);
    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    std::string getPhoneNumber();
    std::string getDarkestSecret();
    
};







#endif 


