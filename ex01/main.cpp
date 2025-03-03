/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 13:00:14 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/01 13:05:46 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

#define FN_MSG "Enter First Name : "
#define LN_MSG "Enter Last Name : "
#define NN_MSG "Enter Nickname : "
#define PH_MSG "Enter Phone Number : "
#define DS_MSG "Enter Darkest Secret : "

std::string get_input(std::string str);
bool        valide_phone_number(std::string str);

int main(void)
{
    PhoneBook phonebook;
    std::string input;
    int i = 0;
    while (true)
    {
        std::cout << "phonebook> ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            break ;
        if (input == "ADD")
        {
			if (i > 7)
				i = 0;
			phonebook.set_first_name(i, get_input(FN_MSG));
            phonebook.set_last_name(i, get_input(LN_MSG));
            phonebook.set_nickname(i, get_input(NN_MSG));
            phonebook.set_phone_number(i, get_input(PH_MSG));
            phonebook.set_darkest_secret(i, get_input(DS_MSG));
            i++;
        }
        else if (input == "SEARCH")
            phonebook.search();
        else if (input == "EXIT")
            break ;
    }
}

std::string get_input(std::string str)
{
    std::string input;

    std::cout << str;
    getline(std::cin, input);
    if (std::cin.eof())
            exit(1);
    if (PH_MSG == str)
    {
        while (!valide_phone_number(input) || input.empty())
        {
            if (!valide_phone_number(input))
                std::cout << "Wrong format, please enter valid phone number\n";
            if (input.empty())
                std::cout << "Error: Empty input\n";
            std::cout << PH_MSG;
            std::getline(std::cin, input);
            if (std::cin.eof())
                exit(1);
        }
        return (input);
    }
    else
    {
        while (input.empty())
        {	
            std::cout << "Error: Empty input\n\n";
            std::cout << str;
            getline(std::cin, input);
            if (std::cin.eof())
                exit(1);
        }
    }
    return (input);
}

bool    valide_phone_number(std::string str)
{
    int i;

    i = 0;
    if (str[i] == '+')
        i++;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return (false);
        i++;
    }
    return (true);
}
