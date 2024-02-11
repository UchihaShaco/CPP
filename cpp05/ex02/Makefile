NAME = ex02

SOURCES = main.cpp Bureaucrat.cpp  AForm.cpp ShrubberyCreationForm.cpp\

OBJECTS = $(SOURCES:%.cpp=%.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):$(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)

main.o: main.cpp Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all