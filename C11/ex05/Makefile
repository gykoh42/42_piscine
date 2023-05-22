CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_calc.c ft_print.c main.c
OBJS = $(SRCS:.c=.o)
RM = rm -f
NAME = do-op

all : ${NAME}

${NAME} : ${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}
%.o : %.c
		${CC} ${CFLAGS} -o $@ -c $^

clean :
	${RM} *.o

fclean : clean
	${RM} ${NAME}

re : fclean all
