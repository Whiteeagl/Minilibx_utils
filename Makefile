SUBDIRS		=	TEXT_UTILS/ \
				BUTTON_UTILS/ \
				LINE_UTILS/ \
				#RECTANGLE_UTILS/ \
				#INCLUDES/ 

MLX_PATH	=	./Mlx
EXEC_NAME	=	exec
MLXFLAGS 	=	-L$(MLX_PATH) -lmlx -L/usr/include/../lib -lXext -lX11 -lm -lbsd
FLAGS		=	-Wall -Wextra -Werror -g3

.PHONY: all clean $(SUBDIRS)

all: $(SUBDIRS)

create_obj_lib:
	mkdir -p obj/
	mkdir -p lib/

compile_mlx:
	$(MAKE) -C $(MLX_PATH)/

$(SUBDIRS): create_obj_lib compile_mlx
	$(MAKE) -C $@

compile: $(SUBDIRS)
	gcc $(FLAGS) main.c lib/*.a $(MLXFLAGS) -o $(EXEC_NAME)

clean:
	rm -rf obj/
	rm -rf lib/

fclean: clean
	$(MAKE) -C $(MLX_PATH)/ clean
	rm $(EXEC_NAME)

re: clean all

.PHONY: all $(SUBDIRS) clean

#MLXFLAGS 	= -L../Mlx -lmlx -L/usr/include/../lib -lXext -lX11 -lm -lbsd