YELLOW		=\033[0;33m
NC			=\033[0m

NAME	 	= button
SRC		 	= SRC/
DESIGN_P	= $(SRC)DESIGN_PATTERN/
CHAIN_LIST	= $(SRC)CHAIN_LIST/
MLX_PATH 	= ../Mlx/

FILES 		=	$(SRC)main.c							\
				$(SRC)button_stuff.c					\
				$(SRC)exit_stuff.c						\
				$(SRC)mouse_stuff.c						\
				$(SRC)keys_stuff.c						\
				$(SRC)other_stuff.c						\
				$(DESIGN_P)design_p_mlx.c				\
				$(DESIGN_P)design_p_mouse.c				\
				$(DESIGN_P)design_p_chain_list.c		\
				$(DESIGN_P)design_p_button_collide.c	\
				$(DESIGN_P)design_p_tmp_button_stuff.c	\
				$(CHAIN_LIST)chain_list_button.c

FLAGS 		= -Wall -Wextra -Werror -g3
MLXFLAGS 	= -L../Mlx -lmlx -L/usr/include/../lib -lXext -lX11 -lm -lbsd
CC 			= gcc

OBJS 		:= $(FILES:.c=.o)
COMPILED 	:= 0

%.o: %.c
	$(CC) $(FLAGS) -c $< -g -o $@
	$(eval COMPILED=$(shell echo $$(($(COMPILED)+1))))

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[0;34m$(CURDIR)$(NC)"
	ar rc button.a $(OBJS)
	$(MAKE) -s -C $(MLX_PATH)
	gcc button.a $(MLXFLAGS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)
	rm -f button.a

re : fclean all

