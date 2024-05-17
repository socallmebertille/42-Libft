#Variables

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
INCLUDE = libft.h

#Sources et Objects

SRCS = $(wildcard *.c)
OBJS = ${SRCS:.c=.o}

#Rules

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

.c.o:
	cc ${FLAGS} -I ${INCLUDE} -c $< -o $@

clean: 
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
