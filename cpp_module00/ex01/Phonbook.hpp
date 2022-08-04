/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonbook.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casper <casper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:17:37 by casper            #+#    #+#             */
/*   Updated: 2022/08/04 12:17:38 by casper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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