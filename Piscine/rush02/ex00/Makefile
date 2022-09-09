# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 15:15:31 by synicole          #+#    #+#              #
#    Updated: 2022/07/31 17:35:58 by synicole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c check.c dictionary.c helpers.c numbers.c helpers_convert.c
OBJS	= ${SRCS:.c=.o}
NAME	= rush-02

GCC = gcc
RM = rm -f

CFLAGS = -Wall -Werror -Wextra

.c.o:
			${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${GCC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
