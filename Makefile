# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fraqioui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 09:36:04 by fraqioui          #+#    #+#              #
#    Updated: 2022/10/19 08:43:08 by fraqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC=gcc
CL=ar -csr
CN=rm -rf
FLAGS=-Wall -Wextra -Werror

FILES =	ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_strlen \
		ft_toupper \
		ft_tolower\
		ft_strchr \
		ft_strrchr \
		ft_strncmp \
	   	ft_strnstr \
		ft_strlcpy \
		ft_strlcat \
		ft_atoi \
		ft_memcpy \
		ft_memmove \
		ft_memset \
		ft_memcmp \
		ft_memchr \
		ft_strdup \
	    ft_substr \
		ft_strjoin \
		ft_split \
		ft_itoa \
		ft_strmapi \
	   	ft_putchar_fd\
		ft_putstr_fd \
		ft_putendl_fd \
		ft_isprint \
	   	ft_putnbr_fd \
		ft_strtrim \
		ft_bzero \
		ft_calloc \
		ft_striteri

BFILES=	ft_lstnew \
		ft_lstadd_front	\
	   	ft_striteri \
		ft_lstsize \
		ft_lstlast \
		ft_lstadd_back \
		ft_lstdelone \
	   	ft_lstclear \
		ft_lstiter \
		ft_lstmap

OBJ=${FILES:=.o}
BOBJ=${BFILES:=.o}

.PHONY: all bonus clean fclean re

all: ${NAME}

${NAME}: ${OBJ}
	@${CL} ${NAME} ${OBJ}

bonus: ${BOBJ}
	@${CL} ${NAME} ${BOBJ}

%.o: %.c libft.h
	@${CC} ${FLAGS} -c $< -o $@

clean: 
	@${CN} ${OBJ} ${BOBJ}

fclean: clean
	@${CN} ${NAME}

re: fclean all
