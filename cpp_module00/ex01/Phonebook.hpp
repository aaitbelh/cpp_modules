# ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>

class Phonebook
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonnumber;
        std::string darkestsecret;
    public:
        std::string getfirstname(int);
        void setfirstname(std::string);
        std::string getlastname(int);
        void setlastname(std::string);
        std::string getPhonNumber();
        int    setPhonNumber(std::string);
        std::string getnickname(int);
        void    setnickname(std::string);
        std::string getDarkestsecret();
        void    setDarkestsecret(std::string);
};


#endif