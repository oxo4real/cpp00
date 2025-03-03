# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/01 11:32:40 by aaghzal           #+#    #+#              #
#    Updated: 2025/03/01 11:32:48 by aaghzal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
BUILDIR = build/
SRCS = megaphone.cpp
OBJS = ${addprefix $(BUILDIR),$(SRCS:.cpp=.o)}

all: $(BUILDIR) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@

$(BUILDIR)%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(BUILDIR):
	@mkdir -p $@

clean:
	@rm -rf $(BUILDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
