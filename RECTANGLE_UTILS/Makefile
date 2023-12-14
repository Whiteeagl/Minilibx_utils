PARENT_DIR			:=	$(notdir $(patsubst %/,%,$(dir $(abspath $(lastword $(MAKEFILE_LIST))))))

SRC					=	SRC/
MLX_BASIQUE_STUFF	=	../INCLUDES/SRC/
SRC_LINE		 	=	../LINE_UTILS/src/

<<<<<<< HEAD
NAME				=	rectangle_utils

vpath %.c			$(SRC) \
					$(SRC_LINE) \
					$(MLX_BASIQUE_STUFF)

FILES				:=	$(wildcard $(SRC)*.c) \
						$(wildcard $(SRC_LINE)*.c) \
=======
NAME				=	button_utils

vpath %.c			$(SRC) 					\
					$(MLX_BASIQUE_STUFF)

FILES				:=	$(wildcard $(SRC)*.c)				\
						$(wildcard $(SRC_LINE)*.c)
>>>>>>> 194202732bdfbae9129650259f8481c924cb096e
						$(wildcard $(MLX_BASIQUE_STUFF)*.c)

FLAGS				=	-Wall -Wextra -Werror -g3
CC					=	gcc

OBJ_DIR				=	../obj/$(PARENT_DIR)
OBJS				=	$(addprefix $(OBJ_DIR)/, $(notdir $(FILES:.c=.o)))

all: $(NAME)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
<<<<<<< HEAD
	$(CC) $(FLAGS) -c $<  ../lib/line_utils.a -g -o $@
=======
	$(CC) $(FLAGS) -c $< -g -o $@
>>>>>>> 194202732bdfbae9129650259f8481c924cb096e

$(OBJ_DIR):
	mkdir -p $@

$(NAME): $(OBJS)
	ar rc $(NAME).a $(OBJS)
	mv $(NAME).a ../lib

.PHONY: all
