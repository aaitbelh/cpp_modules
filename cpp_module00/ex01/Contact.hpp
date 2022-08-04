/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casper <casper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:17:19 by casper            #+#    #+#             */
/*   Updated: 2022/08/04 12:17:28 by casper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define	CONTACT_HPP

#include <string>
#include <iostream>
class Contact
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