# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpotillion <marvin@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 12:49:24 by tpotillion        #+#    #+#              #
#    Updated: 2022/10/27 15:29:54 by tpotillion       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memccpy.c\
			ft_memset.c\
			ft_split.c\
			ft_strchr.c\
			ft_strlcpy.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlen.c\
			ft_strnstr.c\
			ft_substr.c\
			ft_toupper.c\

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc
RM		=	rm -rf

CFLAGS	=	-Wall -Wextra -Werror

.c.o :
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) :	${OBJS}
			ar -rcs ${NAME} ${OBJS}

all : ${NAME}

clean :
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY	:	all clean fclean re bonus