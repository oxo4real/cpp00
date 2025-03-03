/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 12:59:48 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/01 13:00:11 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void        set_first_name(std::string str);
        void        set_last_name(std::string str);
        void        set_nickname(std::string str);
        void        set_phone_number(std::string str);
        void        set_darkest_secret(std::string str);
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nickname();
        std::string get_phone_number();
        std::string get_darkest_secret();
};

#endif
