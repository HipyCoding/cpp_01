# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: christian <christian@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 23:31:22 by candrese          #+#    #+#              #
#    Updated: 2025/02/05 04:46:22 by christian        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	brain

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++17 #-g3

SRCS		=	main.cpp

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