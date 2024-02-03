NAME = ex02

SOURCES = Main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp \

OBJECTS = $(SOURCES:%.cpp=%.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):$(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)

Main.o: Main.cpp Animal.hpp Dog.hpp Cat.hpp Brain.hpp

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all