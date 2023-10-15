CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CPP_FILES = main.cpp Fixed.cpp
NAME = Orthodox
RM = rm -rf

OBJ = $(CPP_FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all