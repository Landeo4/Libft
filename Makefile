# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 12:49:24 by tpotillion        #+#    #+#              #
#    Updated: 2022/12/08 06:25:48 by tpotilli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memcpy.c\
			ft_memset.c\
			ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_split.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_strlcpy.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlen.c\
			ft_strmapi.c\
			ft_strnstr.c\
			ft_substr.c\
			ft_toupper.c\
			ft_memmove.c\
			ft_memcmp.c\
			ft_memchr.c\
			ft_tolower.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_strtrim.c\
			ft_itoa.c\
			ft_striteri.c\

OBJS	=	$(SRCS:.c=.o)
CC		=	cc
RM		=	rm -rf
CFLAGS	=	-Wall -Wextra -Werror

.c.o :
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) :	${OBJS}
			ar -rcs ${NAME} ${OBJS}

all : ${NAME}

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

clean :
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY	:	all clean fclean re bonus