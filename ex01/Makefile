# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/01 11:34:58 by aaghzal           #+#    #+#              #
#    Updated: 2025/03/01 11:35:05 by aaghzal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
BUILDIR = build/
SRCS = Contact.cpp PhoneBook.cpp main.cpp
OBJS = ${addprefix $(BUILDIR),$(SRCS:.cpp=.o)}

all: $(BUILDIR) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@

$(BUILDIR)%.o: %.cpp Contact.hpp PhoneBook.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(BUILDIR):
	@mkdir -p $@

clean:
	@rm -rf $(BUILDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
