CC = cc
CFLAGS = -Wall -Wextra -Werror 
NAME = libftprintf.a
SRCS = numfunctions.c strfunction.c ft_printf.c
OBJS = ${SRCS:.c=.o}
AR = ar

%.o : %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@

all : ${NAME}

${NAME} : ${OBJS}
	${AR} rcs ${NAME} ${OBJS}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY: all clean fclean re