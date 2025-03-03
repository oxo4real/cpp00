/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 13:02:08 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/01 13:03:22 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"


class PhoneBook {
    private:
        Contact     contacts[8];
        std::string add_left_padding(std::string str);
        void        empty_cin(void);
        void        print_specific_contact(int idx);
    public:
        void        set_first_name(int idx, std::string str);
        void        set_last_name(int idx, std::string str);
        void        set_nickname(int idx, std::string str);
        void        set_phone_number(int idx, std::string str);
        void        set_darkest_secret(int idx, std::string str);
        std::string get_first_name(int idx);
        std::string get_last_name(int idx);
        std::string get_nickname(int idx);
        std::string get_phone_number(int idx);
        std::string get_darkest_secret(int idx);
        void        search(void);
};

#endif
