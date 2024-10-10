# Build configuration
NAME         := push_swap
CC           := cc
CFLAGS       := -Wall -Wextra -g3 -fsanitize=address,undefined -Iinclude

# Sources and includes
SRCS         := src/ps_main.c
INCS         := include/ps_internal.h

# Objects and dependencies
OBJS         := $(SRCS:.c=.o)
DEPS         := $(OBJS:.o=.d)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

norm:
	-norminette $(SRCS) $(INCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean norm
