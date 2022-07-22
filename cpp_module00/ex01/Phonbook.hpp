# ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <iomanip>

class Phonbook
{
    private:
        Contact contacts[8];
    public:
        Contact *getContact();
        void    setContact(Contact newone, int index);
};


Contact Addcontact();
void showcontact(Contact contacts[], int size);
void getcontactid(Contact contact[], int size);
void showGuide();
#endif