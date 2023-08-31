SRCS	=	ft_printf_utils.c \
			ft_printf.c \

NAME	= libftprintf.a
OBJS	= ${SRCS:.c=.o}
FLAGS	= -Wall -Wextra -Werror

.c.o	:
		@gcc $(FLAGS) -c -I . $< -o ${<:.c=.o}
		@echo "\033[0;93mCompiling : $< \033[0;39m"

${NAME}	: ${OBJS}
		@ar rc ${NAME} ${OBJS}
		@ranlib ${NAME}
		@echo "\033[0;92mft_printf successfully compiled.\033[0;39m"

all : ${NAME}

test : all
		@gcc -g3 -fsanitize=address main.c ${NAME} -o test
		@echo "\033[0;92mTest compiled.\033[0;39m"
		./test

clean :
		@rm -f ${OBJS}
		@rm -f ${BONUS_OBJS}
		@echo "\033[0;92m.o files cleaned.\033[0;39m"

fclean : clean
		@rm -f ${NAME}
		@rm -f test
		@echo "\033[0;92mft_printf cleaned.\033[0;39m"

re : fclean all
		@echo "\033[0;92mCleaned and rebuilded.\033[0;39m"
