NAME = ex02

SOURCES = main.cpp Bureaucrat.cpp Form.cpp\

OBJECTS = $(SOURCES:%.cpp=%.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):$(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)

main.o: main.cpp Bureaucrat.hpp Form.hpp

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all