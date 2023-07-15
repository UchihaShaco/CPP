CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = phonebook
SRCS = phonebook.cpp main.cpp contact.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean:
	rm -f $(OBJS) $(TARGET)
re: fclean all