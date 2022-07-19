#include "Phonebook.hpp"


Phonebook Addcontact()
{
    class Phonebook newcontact;
    std::string input;
    std::cout<<"firstname: ";
    std::cin >> input;
    if(std::cin.eof())
        exit(1);
    newcontact.setfirstname(input);
    std::cout << "lastname: ";
    std::cin >> input;
    if(std::cin.eof())
        exit(1);
    newcontact.setlastname(input);
    std::cout << "nickname: ";
    std::cin >> input;
    if(std::cin.eof())
        exit(1);
    newcontact.setnickname(input);
    while(1){
        std::cout << "Phonenumber: ";
        std::cin >> input;
        if(std::cin.eof())
            exit(1);
        if(newcontact.setPhonNumber(input))
            break;
        else
        {
            std::cout << "only degit are acceptable try again !!" << std::endl;
            input.clear();
            std::cin.clear();
        }
    }
    std::cout << "darkestsecret: ";
    std::cin >> input;
    if(std::cin.eof())
        exit(1);
    newcontact.setDarkestsecret(input);
    return (newcontact);
}

void showGuide()
{

std::cout << "░██╗░░░░░░░██╗███████╗██╗░░░░░░█████╗░░█████╗░███╗░░██╗███████╗"<< std::endl;
std::cout << "░██║░░██╗░░██║██╔════╝██║░░░░░██╔══██╗██╔══██╗████╗░██║██╔════╝"<< std::endl;
std::cout << "░╚██╗████╗██╔╝█████╗░░██║░░░░░██║░░╚═╝██║░░██║██╔██╗██║█████╗░░"<< std::endl;
std::cout << "░░████╔═████║░██╔══╝░░██║░░░░░██║░░██╗██║░░██║██║╚████║██╔══╝░░"<< std::endl;
std::cout << "░░╚██╔╝░╚██╔╝░███████╗███████╗╚█████╔╝╚█████╔╝██║░╚███║███████╗"<< std::endl;
std::cout << "░░░╚═╝░░░╚═╝░░╚══════╝╚══════╝░╚════╝░░╚════╝░╚═╝░░╚══╝╚══════╝"<< std::endl;
std::cout << "▀█▀ █▀█   █▀▄▀█ █▄█   █▀█ █░█ █▀█ █▄░█ █▀▀   █▄▄ █▀█ █▀█ █▄▀ " << std::endl;
std::cout << "░█░ █▄█   █░▀░█ ░█░   █▀▀ █▀█ █▄█ █░▀█ ██▄   █▄█ █▄█ █▄█ █░█ " << std::endl;
std::cout << "COMMANDS: ADD, SEARCH, EXIT" << std::endl;
}

std::string tookinput()
{
    std::string input;
    while(1)
    {
        std::cin >> input;
        if(!input.empty())
            break;
        if(std::cin.eof())
            exit(0);
        input.clear();
    }
    return (input);
}

void showcontact(class Phonebook contact[], int size)
{
    std::cout << "id " << "|" << "firstname " << "|" << "lastname  " << "|" <<  "nickname  " << std::endl;
    for(int i =0 ; i < size; i++)
    {
        std::cout << i + 1 << "  |" << contact[i].getfirstname(1) << "|" << contact[i].getlastname(1) << "|" << contact[i].getnickname(1) << std::endl;
    }
}

void getcontactid(Phonebook contact[], int size){
    int id;

    while(1)
    {
        std::cout << "enter the id: ";
        std::cin >> id;
        if(id > size || id <= 0)
            std::cout << "invalid id" << std::endl;
        else
        {
            id -= 1;
            std::cout << "firstname: " << contact[id].getfirstname(0) << std::endl << "lastname: " << contact[id].getlastname(0) << std::endl << "nickname: " << contact[id].getnickname(0)
                <<std::endl << "PhoneNumber: " << contact[id].getPhonNumber() << std::endl << "darksecret: " <<contact[id].getDarkestsecret() << std::endl;
            break;
        }
    }
}
int main()
{
    class Phonebook contact[8];
    int ContactIndex = 0;
    int contactSize = 0;
    std::string input;
    while(1)
    {
        showGuide();
        std::cout << "enter a command: ";
        std::cin >> input;
        if(std::cin.eof()){
            std::cout << std::endl;
            break; 
        }
        if(input == "ADD")
        {
            contact[ContactIndex % 8] = Addcontact();
            ContactIndex++;
            if(contactSize < 8)
                contactSize++;
        }
        if(input == "SEARCH")
        {
            showcontact(contact, contactSize);
            getcontactid(contact,contactSize);
        }
        if(input == "EXIT")
            break;
    }
}