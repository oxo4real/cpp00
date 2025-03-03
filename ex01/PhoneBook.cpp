/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 13:00:53 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/01 13:02:55 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

void    PhoneBook::set_first_name(int idx, std::string str)
{
    contacts[idx].set_first_name(str);
}

void    PhoneBook::set_last_name(int idx, std::string str)
{
    contacts[idx].set_last_name(str);
}

void    PhoneBook::set_nickname(int idx, std::string str)
{
    contacts[idx].set_nickname(str);
}

void    PhoneBook::set_phone_number(int idx, std::string str)
{
    contacts[idx].set_phone_number(str);
}

void    PhoneBook::set_darkest_secret(int idx, std::string str)
{
    contacts[idx].set_darkest_secret(str);
}

std::string    PhoneBook::get_first_name(int idx)
{
    return (contacts[idx].get_first_name());
}

std::string    PhoneBook::get_last_name(int idx)
{
    return (contacts[idx].get_last_name());
}

std::string    PhoneBook::get_nickname(int idx)
{
    return (contacts[idx].get_nickname());
}

std::string    PhoneBook::get_phone_number(int idx)
{
    return (contacts[idx].get_phone_number());
}
std::string    PhoneBook::get_darkest_secret(int idx)
{
    return (contacts[idx].get_darkest_secret());
}

std::string PhoneBook::add_left_padding(std::string str)
{
    if (str.length() >= 10)
    {
        str.resize(str.size() - (str.length() - 10));
        str[9] = '.';
    }
    else if (str.length() < 10)
        str = std::string(10 - str.length(), ' ') + str;
    return (str);
}

void    PhoneBook::empty_cin(void)
{
    char c;
    while (std::cin.get(c))
    { 
        if (c == '\n')
            break;
    }
}

void    PhoneBook::search(void)
{
    std::string tmp;
    int count = 0;
    int idx = -1;
    std::cout << "+----------+----------+----------+----------+" << std::endl;
    std::cout << "|     index|first name|  lastname|  nickname|" << std::endl;
    std::cout << "+----------+----------+----------+----------+" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        if (!this->get_first_name(i).empty())
        {   
            std::cout << "|         " << i << "|";
            tmp = add_left_padding(this->get_first_name(i));
            std::cout << tmp << "|";
            tmp = add_left_padding(this->get_last_name(i));
            std::cout << tmp << "|";
            tmp = add_left_padding(this->get_nickname(i));
            std::cout << tmp << "|" << std::endl;
            std::cout << "+----------+----------+----------+----------+" << std::endl;
            count++;
        }
    }
    if (count != 0)
    {
        while (true)
        {
            std::cout << "Pick an index to display more information: ";
            std::cin >> idx;
            if (std::cin.fail() || idx < 0 || idx >= count)
            {
                std::cin.clear();
                empty_cin();
                std::cout << "Invalid index. Please try again." << std::endl;
            }
            else
                break ;
        }
        empty_cin();
        print_specific_contact(idx);
    }
}

void    PhoneBook::print_specific_contact(int idx)
{
    std::cout << "First Name: "
              << this->get_first_name(idx)
              << std::endl;
    std::cout << "Last Name: "
              << this->get_last_name(idx)
              << std::endl;
    std::cout << "Nickname: "
              << this->get_nickname(idx)
              << std::endl;
    std::cout << "Phone Number: "
              << this->get_phone_number(idx)
              << std::endl;
    std::cout << "Darkest Secret: "
              << this->get_darkest_secret(idx)
              << std::endl;
}
