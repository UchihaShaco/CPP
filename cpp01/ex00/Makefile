CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = ex00
SRCS = randomChump.cpp main.cpp newZombie.cpp Zombie.cpp
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
