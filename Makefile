# Build configuration
NAME         := push_swap
CC           := cc
CFLAGS       := -Wall -Wextra -g3 -fsanitize=address,undefined -Iinclude

# Sources and includes
SRCS         := src/ps_main.c \
                src/ps_debug.c \
                src/s_stack.c \
                src/s_queue_ops.c \
                src/s_peek_ops.c \
                src/s_extra_ops.c \
                src/ps_ops.c \
                src/ps_rotate_ops.c \
                src/ps_rev_rotate_ops.c \
                src/ps_stacks.c

INCS         := src/ps_internal.h \
                src/ps_debug.h \
                src/s_stack.h

# Objects and dependencies
OBJS         := $(SRCS:.c=.o)
DEPS         := $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

norm:
	-norminette $(SRCS) $(INCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all norm clean fclean re
