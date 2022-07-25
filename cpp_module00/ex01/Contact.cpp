#include "Contact.hpp"

std::string Contact::getPhonNumber(){
    return (phonnumber);
}

int Contact::setPhonNumber(std::string input){
    for(int i =0; i < (int)input.size(); i++)
    {
        if(!isdigit(input[i]))
            return (0);
    }
    phonnumber = input;
    return (1);
}
std::string Contact::getDarkestsecret(){
    return (darkestsecret);
}
void Contact::setDarkestsecret(std::string input){
    darkestsecret = input;
}

std::string Contact::getnickname(int type){
    
    if(type == 1)
    {
        std::string str;
        str = nickname;
        if(nickname.size() > 10)
        {
            std::string str;
            str = nickname;
            str.resize(10);
            str[9] = '.';
            return (str);
        }
        return (nickname);
    }
    else
        return (nickname);
}

void Contact::setnickname(std::string input){
    nickname = input;
}

std::string Contact::getlastname(int type){
    
    if(type == 1)
    {
        std::string str;
        str = lastname;
        if(lastname.size() > 10)
        {
            std::string str;
            str = lastname;
            str.resize(10);
            str[9] = '.';
            return (str);
        }
        return (lastname);
    }
    else
        return (lastname);
}

void Contact::setlastname(std::string input){
    lastname = input;
}

void Contact::setfirstname(std::string input){
   firstname = input;
}

std::string Contact::getfirstname(int type){
    
    if(type == 1)
    {
        if(firstname.size() > 10)
        {
            std::string str;
            str = firstname;
            str.resize(10);
            str[9] = '.';
            return (str);
        }
        return (firstname);
    }
    else
        return (firstname);
}