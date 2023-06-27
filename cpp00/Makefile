
CC = clang++
CFLAGS = -Wall -Werror -Wextra
NAME = megaphone
SRC = megaphone.cpp

all: $(NAME)

$(NAME):
    $(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
    rm -f $(NAME)

re: clean all
