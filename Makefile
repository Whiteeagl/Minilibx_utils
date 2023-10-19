SUBDIRS		=	BUTTON_UTILS/ \
				TEXT_UTILS/

.PHONY: all clean $(SUBDIRS)

all: create_obj_lib $(SUBDIRS)

create_obj_lib:
	mkdir -p obj/
	mkdir -p lib/

$(SUBDIRS):
	$(MAKE) -C $@

clean:
	rm -rf obj/
	rm -rf lib/

re: clean all

.PHONY: all $(SUBDIRS) clean

#MLXFLAGS 	= -L../Mlx -lmlx -L/usr/include/../lib -lXext -lX11 -lm -lbsd