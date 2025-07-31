# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/22 13:33:20 by mtakiyos          #+#    #+#              #
#    Updated: 2025/07/29 17:45:34 by mtakiyos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wextra -Werror -Wall
SRCS	= ft_toupper.c \
	ft_tolower.c \
	ft_strrchr.c \
	ft_bzero.c \
	ft_strncmp.c \
	ft_strlen.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_isprint.c \
	ft_isdigit.c \
	ft_isascii.c \
	ft_isalpha.c \
	ft_isalnum.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c 
	 
OBJS =	$(SRCS:.c=.o)
	
all:	$(NAME)

${NAME}: ${OBJS}
	ar crs $@ $^

%.o:%.c
	cc ${CFLAGS} -c $^ -o $@

clean:	
	rm -f $(OBJS)

fclean:	clean
	rm -f ${NAME}

re:	fclean all