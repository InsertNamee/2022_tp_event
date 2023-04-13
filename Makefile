# E89 Pedagogical & Technical Lab
# project:     template C repo
# created on:  2022-09-14 - 16:36 +0200
# 1st author:  Élise C. Philippe - eriizu
# description: Building the project

NAME	=	key.out

SRCS	=	src/main.c		\
		src/key_event.c		\
		src/clear_pixelarray.c	\
		src/put_pixel.c		\

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-Wall -Wextra -Iinclude/

LDFLAGS	+=	-llapin -lsfml-graphics -lsfml-window -lsfml-system -lstdc++ -lm

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
