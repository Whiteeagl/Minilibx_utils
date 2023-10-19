YELLOW		   		=   \033[0;33m
NC			   		=   \033[0m

NAME				=	rectangle
SRC					=	src/
SRC_LINE		 	=	../LINE_UTILS/src/
MLX_PATH		 	=	../Mlx/
MLX_BASIQUE_STUFF	=	../INCLUDES/SRC/

SRCS			 	=   $(SRC)main.c							\
						$(SRC)rectangle.c						\
						$(SRC_LINE)draw_lines.c					\
						$(SRC_LINE)utils.c						\
						$(MLX_BASIQUE_STUFF)design_p_mlx.c	  

OBJ					=	$(patsubst %.c, obj/%.o, $(notdir $(SRCS)))

CLEANF				=   @(find . -name "*.o" -type f -delete)

FLAGS			=   -Wall -Wextra -Werror -g3
MLXFLAGS		 =   -L../Mlx -lmlx -L/usr/include/../lib -lXext -lX11 -lm -lbsd
CC			   =   cc

BOLD			 =   "\033[1m"
RESET			=   "\033[0m"
LIGHT_GREEN	  =   "\033[92m"
LIGHT_CYAN	   =   "\033[96m"

all: $(NAME)

obj/%.o: %.c 
	@mkdir -p $(dir $@)
	@echo $(BOLD)$(LIGHT_CYAN)Compiling $<... $(RESET)
	@$(CC) $(FLAGS) -c $< -o $@

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


