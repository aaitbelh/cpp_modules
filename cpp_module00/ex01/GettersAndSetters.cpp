#include "Phonebook.hpp"

std::string Phonebook::getPhonNumber(){
    return (phonnumber);
}

int Phonebook::setPhonNumber(std::string input){
    for(int i =0; i < input.size(); i++)
    {
        if(!isdigit(input[i]))
            return (0);
    }
    phonnumber = input;
    return (1);
}
std::string Phonebook::getDarkestsecret(){
    return (darkestsecret);
}
void Phonebook::setDarkestsecret(std::string input){
    darkestsecret = input;
}

std::string Phonebook::getnickname(int type){
    
    if(type == 1)
    {
        std::string str;
        str = nickname;
        if(str.size() < 10)
        {
            for(int i = str.size() ; i < 10; i++)
                str.append(" ");
        }
        else
        {
            str.resize(10);
            str[9] = '.';
        }
        return (str);
    }
    else
        return (nickname);
}

void Phonebook::setnickname(std::string input){
    nickname = input;
}

std::string Phonebook::getlastname(int type){
    
    if(type == 1)
    {
        std::string str;
        str = lastname;
        if(str.size() < 10)
        {
            for(int i = str.size() ; i < 10; i++)
                str.append(" ");
        }
        else
        {
            str.resize(10);
            str[9] = '.';
        }
        return (str);
    }
    else
        return (lastname);
}

void Phonebook::setlastname(std::string input){
    lastname = input;
}

void Phonebook::setfirstname(std::string input){
   firstname = input;
}

std::string Phonebook::getfirstname(int type){
    
    if(type == 1)
    {
        std::string str;
        str = firstname;
        if(str.size() < 10)
        {
            for(int i = str.size() ; i < 10; i++)
                str.append(" ");
        }
        else
        {
            str.resize(10);
            str[9] = '.';
        }
        return (str);
    }
    else
        return (firstname);
}