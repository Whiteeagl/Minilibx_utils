PARENT_DIR			:=	$(notdir $(patsubst %/,%,$(dir $(abspath $(lastword $(MAKEFILE_LIST))))))

SRC					=	SRC/
MLX_BASIQUE_STUFF	=	../INCLUDES/SRC/

NAME				=	button_utils

vpath %.c			$(SRC) 					\
					$(MLX_BASIQUE_STUFF)

FILES				:=	$(wildcard $(SRC)*.c)				\
						$(wildcard $(MLX_BASIQUE_STUFF)*.c)

FLAGS				=	-Wall -Wextra -Werror -g3
CC					=	gcc

OBJ_DIR				=	../obj/$(PARENT_DIR)
OBJS				=	$(addprefix $(OBJ_DIR)/, $(notdir $(FILES:.c=.o)))

all: $(NAME)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -g -o $@

$(OBJ_DIR):
	mkdir -p $@

$(NAME): $(OBJS)
	ar rc $(NAME).a $(OBJS)
	mv $(NAME).a ../lib

.PHONY: all
