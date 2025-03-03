# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/01 11:33:52 by aaghzal           #+#    #+#              #
#    Updated: 2025/03/01 11:34:02 by aaghzal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
BUILDIR = build/
SRCS = Account.cpp tests.cpp
OBJS = ${addprefix $(BUILDIR),$(SRCS:.cpp=.o)}

all: $(BUILDIR) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@

$(BUILDIR)%.o: %.cpp Account.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(BUILDIR):
	@mkdir -p $@

clean:
	@rm -rf $(BUILDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
