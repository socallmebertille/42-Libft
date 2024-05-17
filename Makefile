#Variables

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
INCLUDE = libft.h

#Sources et Objects

SRCS = $(wildcard *.c)
OBJS = ${SRCS:.c=.o}

#Rules

all: ${NAME}

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJS}

.c.o:
	cc ${FLAGS} -c $< -o $@

clean: 
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re