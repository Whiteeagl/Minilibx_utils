NAME	 			=	line
SRC		 			=	src/
MLX_PATH 			=	../Mlx/
MLX_BASIQUE_STUFF	=	../INCLUDES/SRC/
OBJ					=	$(patsubst %.c, obj/%.o, $(SRCS))
CLEANF 				=	@(find . -name "*.o" -type f -delete)

SRCS 				=	main.c						\
						draw_lines.c				\
						utils.c						\
						design_p_mlx.c

FLAGS 				=	-Wall -Wextra -Werror -g3
MLXFLAGS 			=	-L../Mlx -lmlx -L/usr/include/../lib -lXext -lX11 -lm -lbsd
CC 					=	cc

BOLD            	=   "\033[1m"
RESET           	=   "\033[0m"
LIGHT_GREEN     	=   "\033[92m"
LIGHT_CYAN      	=   "\033[96m"

obj/%.o: %.c 
	@mkdir -p $(dir $@)
	@echo $(BOLD)$(LIGHT_CYAN)Compiling $<... $(RESET)
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -s -C $(MLX_PATH)
	@$(CC) $(CFLAGS) $(OBJ) $(MLXFLAGS) -o $(NAME)

clean :
	@$(CLEANF)
	@echo $(BOLD)$(LIGHT_GREEN).o deleted.$(RESET)
	@rm -rf obj/

fclean : clean
	@rm -f $(NAME)
	@rm -f line.a

re : fclean all

vpath %.c $(SRC) $(SRC_LINE) $(MLX_BASIQUE_STUFF)
