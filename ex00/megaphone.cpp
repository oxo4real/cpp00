/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:32:52 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/01 12:59:24 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int	i = 1;
    if (ac > 1)
    {
        while (av[i])
        {
            int	j = 0;
            while (av[i][j])
            {
                std::cout << (char)toupper(av[i][j]);
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"
                  << std::endl;
    }
}
