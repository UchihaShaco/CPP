CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = ex02
SRCS = main.cpp FragTrap.cpp ClapTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean:
	rm -f $(OBJS) $(TARGET)
re: fclean all

