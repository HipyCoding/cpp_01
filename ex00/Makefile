# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: candrese <candrese@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 23:29:55 by candrese          #+#    #+#              #
#    Updated: 2025/02/03 23:29:57 by candrese         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	zombie

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++17

SRCS		=	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp

OBJS		=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
