YELLOW				=\033[0;33m
NC					=\033[0m

NAME	 			= text
INCLUDE				= INCLUDES/
SRC		 			= SRC/
DESIGN_P			= $(SRC)DESIGN_PATTERN/
CHAIN_LIST			= $(SRC)CHAIN_LIST/
INIT_STUFF			= $(SRC)INIT_STUFF/
GRAPHIC_STUFF		= $(SRC)GRAPHIC_STUFF/
TEXT_STUFF			= $(SRC)TEXT_STUFF/
ERROR_STUFF			= $(SRC)ERROR_STUFF/
MIN_LETTERS_STUFF	= $(SRC)MIN_LETTERS/
MLX_BASIQUE_STUFF	= ../INCLUDES/SRC/
MLX_PATH 			= ../Mlx/

FILES 				=	$(SRC)others_stuff.c					\
						$(SRC)icc_letters_utils.c				\
						$(INCLUDE)ft_memcpy_text.c				\
						$(INCLUDE)ft_len_text.c					\
						$(DESIGN_P)design_p_min_letters.c		\
						$(DESIGN_P)design_p_icc_letters.c		\
						$(DESIGN_P)design_p_chain_list_text.c	\
						$(DESIGN_P)design_p_scale.c				\
						$(ERROR_STUFF)errors_msg.c				\
						$(INIT_STUFF)init_min_letter.c			\
						$(GRAPHIC_STUFF)mlx_graphic_utils.c		\
						$(TEXT_STUFF)text_stuff_utils.c			\
						$(CHAIN_LIST)text_chain_list.c			\
						$(MIN_LETTERS_STUFF)a.c					\
						$(MIN_LETTERS_STUFF)b_c_d_e_f.c			\
						$(MIN_LETTERS_STUFF)g_h_i_j_k.c			\
						$(MIN_LETTERS_STUFF)l_m_n_o_p.c			\
						$(MIN_LETTERS_STUFF)q_r_s_t_u.c			\
						$(MIN_LETTERS_STUFF)v_w_x_y_z.c			\
						$(MIN_LETTERS_STUFF)icc_letters.c		\
						$(MIN_LETTERS_STUFF)icc_letters2.c		\
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
#gcc $(OBJS) $(NAME).a $(MLXFLAGS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)
	rm -f $(NAME).a

re : fclean all