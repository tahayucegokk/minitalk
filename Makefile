NAME = libft.a
LIBFT = libft
SRCS = server.c client.c
all: $(NAME)

$(NAME): $(LIBFT) $(SRCS)
		make -C $(LIBFT)
		cp libft/libft.a .
		gcc server.c $(NAME) -o server
		gcc client.c $(NAME) -o client
clean:
		make clean -C $(LIBFT)
fclean: clean
		make fclean -C $(LIBFT)
		rm -rf $(NAME)
		rm -rf server client

.PHONY: clean fclean all