YELLOW				=\033[0;33m
NC					=\033[0m

NAME	 			= button_prg
SRC		 			= SRC/
DESIGN_P			= $(SRC)DESIGN_PATTERN/
CHAIN_LIST			= $(SRC)CHAIN_LIST/
MLX_PATH 			= ../Mlx/
MLX_BASIQUE_STUFF	= ../INCLUDES/SRC/
TEXT_UTILS_PATH		= ../TEXT_UTILS/
ALL_H_FILES			= INCLUDES/button.h \
						$(TEXT_UTILS_PATH)INCLUDES/text.h


FILES 				=	$(SRC)main.c							\
						$(SRC)button_stuff.c					\
						$(SRC)exit_stuff.c						\
						$(SRC)mouse_stuff.c						\
						$(SRC)keys_stuff.c						\
						$(SRC)other_stuff.c						\
						$(DESIGN_P)design_p_mouse.c				\
						$(DESIGN_P)design_p_chain_list.c		\
						$(DESIGN_P)design_p_button_collide.c	\
						$(DESIGN_P)design_p_tmp_button_stuff.c	\
						$(CHAIN_LIST)chain_list_button.c		\
						$(MLX_BASIQUE_STUFF)design_p_mlx.c

FLAGS 				= -Wall -Wextra -Werror -g3
MLXFLAGS 			= -L../Mlx -lmlx -L/usr/include/../lib -lXext -lX11 -lm -lbsd
CC 					= gcc

OBJS 				:= $(FILES:.c=.o)
COMPILED 			:= 0

%.o: %.c $(ALL_H_FILES)
	$(CC) $(FLAGS) -c $< -g -o $@
	$(eval COMPILED=$(shell echo $$(($(COMPILED)+1))))

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[0;34m$(CURDIR)$(NC)"
	ar rc $(NAME).a $(OBJS)
	$(MAKE) -s -C $(MLX_PATH)
	$(MAKE) -s -C $(TEXT_UTILS_PATH)
	gcc $(NAME).a $(TEXT_UTILS_PATH)text.a $(MLXFLAGS) -o $(NAME)

clean :
	rm -f $(OBJS)
	$(MAKE) -s -C $(TEXT_UTILS_PATH) clean

fclean : clean
	rm -f $(NAME)
	rm -f $(NAME).a
	$(MAKE) -s -C $(TEXT_UTILS_PATH) fclean

re : fclean all

