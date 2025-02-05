# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: candrese <candrese@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/05 17:06:27 by candrese          #+#    #+#              #
#    Updated: 2025/02/05 17:22:54 by candrese         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	replacer

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++17 #-g3

SRCS		=	main.cpp \
				Replace.cpp

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
