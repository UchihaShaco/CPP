CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(NAME)
fclean: clean
	rm -f $(OBJS)
.PHONY: all clean
