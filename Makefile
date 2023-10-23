SUBDIRS		=	TEXT_UTILS/

EXEC_NAME	=	exec
MLXFLAGS 	=	-L./Mlx -lmlx -L/usr/include/../lib -lXext -lX11 -lm -lbsd
FLAGS		=	-Wall -Wextra -Werror -g3

.PHONY: all clean $(SUBDIRS)

all: $(SUBDIRS)

create_obj_lib:
	mkdir -p obj/
	mkdir -p lib/

$(SUBDIRS): create_obj_lib
	$(MAKE) -C $@

compile: $(SUBDIRS)
	gcc $(FLAGS) main.c lib/*.a $(MLXFLAGS) -o $(EXEC_NAME)

clean:
	rm -rf obj/
	rm -rf lib/

fclean: clean
	rm $(EXEC_NAME)

re: clean all

.PHONY: all $(SUBDIRS) clean

#MLXFLAGS 	= -L../Mlx -lmlx -L/usr/include/../lib -lXext -lX11 -lm -lbsd