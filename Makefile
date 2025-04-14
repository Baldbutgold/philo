#------------------ Srcs & Objs -------------------#

SRCS = main.c

OBJS = $(SRCS:.c=.o)

#----------------- Constant namings ---------------------#

CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

#--------------------- RULES --------------------#

NAME = philo

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
