CC = g++
CFLAGS = -Wall -g -std=c++98
NAME = main
SRC = account.cpp tests.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: clean all