# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/09 08:46:07 by arabefam          #+#    #+#              #
#    Updated: 2024/07/09 08:54:52 by arabefam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	philo
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
SRCS	=	$(shell find src -name '*.c')
OBJS	=	$(SRCS:.c=.o)

%.o		:	%.c
	$(CC) $(CFLAGS) -c -o $@ $<
all		:	$(NAME)
$(NAME)	:	$(OBJS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
clean	:
		rm -f $(OBJS)
fclean	:	clean
		rm -f $(NAME)
re		:	fclean all
