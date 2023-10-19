PARENT_DIR			:=	$(notdir $(patsubst %/,%,$(dir $(abspath $(lastword $(MAKEFILE_LIST))))))


INCLUDE				=	INCLUDES/
SRC					=	SRC/
DESIGN_P			=	$(SRC)DESIGN_PATTERN/
CHAIN_LIST			=	$(SRC)CHAIN_LIST/
INIT_STUFF			=	$(SRC)INIT_STUFF/
GRAPHIC_STUFF		=	$(SRC)GRAPHIC_STUFF/
TEXT_STUFF			=	$(SRC)TEXT_STUFF/
ERROR_STUFF			=	$(SRC)ERROR_STUFF/
MIN_LETTERS_STUFF	=	$(SRC)MIN_LETTERS/
MLX_BASIQUE_STUFF	=	../INCLUDES/SRC/

NAME				=	text_utils

vpath %.c			$(SRC)					\
					$(INCLUDE)				\
					$(DESIGN_P)				\
					$(TEXT_STUFF)			\
					$(CHAIN_LIST)			\
					$(INIT_STUFF)			\
					$(ERROR_STUFF)			\
					$(GRAPHIC_STUFF)		\
					$(MIN_LETTERS_STUFF)	\
					$(MLX_BASIQUE_STUFF)

FILES				:= 	$(wildcard $(SRC)*.c)				\
						$(wildcard $(INCLUDE)*.c)			\
						$(wildcard $(DESIGN_P)*.c)			\
						$(wildcard $(TEXT_STUFF)*.c)		\
						$(wildcard $(CHAIN_LIST)*.c)		\
						$(wildcard $(INIT_STUFF)*.c)		\
						$(wildcard $(ERROR_STUFF)*.c)		\
						$(wildcard $(GRAPHIC_STUFF)*.c)		\
						$(wildcard $(MIN_LETTERS_STUFF)*.c)	\
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
