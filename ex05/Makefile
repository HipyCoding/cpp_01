# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: candrese <candrese@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/05 21:16:03 by candrese          #+#    #+#              #
#    Updated: 2025/02/05 21:16:48 by candrese         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	harl

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++17 #-g3

SRCS		=	main.cpp \
				Harl.cpp 

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
