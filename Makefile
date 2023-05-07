NAME = libft.a
CC = gcc
SRCSDIR = srcs/
HEADERSDIR = includes/
CFLAGS = -Wall -Werror -Wextra -I $(HEADERSDIR)
AR = ar rcs
RM = rm -f

SRCS=$(shell find $(SRC_DIR) -name '*.c')
OBJS=$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
