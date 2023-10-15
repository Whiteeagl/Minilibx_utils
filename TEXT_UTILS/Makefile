YELLOW				=\033[0;33m
NC					=\033[0m

NAME	 			= text
INCLUDE				= INCLUDES/
SRC		 			= SRC/
DESIGN_P			= $(SRC)DESIGN_PATTERN/
CHAIN_LIST			= $(SRC)CHAIN_LIST/
MIN_LETTERS_STUFF	= $(SRC)MIN_LETTERS/
MLX_BASIQUE_STUFF	= ../INCLUDES/SRC/
MLX_PATH 			= ../Mlx/

FILES 				=	main.c								\
						$(SRC)others_stuff.c				\
						$(INCLUDE)ft_memcpy_text.c			\
						$(INCLUDE)ft_len_text.c				\
						$(DESIGN_P)design_p_min_letters.c	\
						$(DESIGN_P)design_p_scale.c			\
						$(MIN_LETTERS_STUFF)a.c				\
						$(MIN_LETTERS_STUFF)b_c_d_e_f.c		\
						$(MLX_BASIQUE_STUFF)design_p_mlx.c


FLAGS 				= -Wall -Wextra -Werror -g3
MLXFLAGS 			= -L../Mlx -lmlx -L/usr/include/../lib -lXext -lX11 -lm -lbsd
CC 					= gcc

OBJS 				:= $(FILES:.c=.o)
COMPILED 			:= 0

%.o: %.c
	$(CC) $(FLAGS) -c $< -g -o $@
	$(eval COMPILED=$(shell echo $$(($(COMPILED)+1))))

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[0;34m$(CURDIR)$(NC)"
	ar rc $(NAME).a $(OBJS)
	$(MAKE) -s -C $(MLX_PATH)
	gcc $(NAME).a $(MLXFLAGS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)
	rm -f $(NAME).a

re : fclean all