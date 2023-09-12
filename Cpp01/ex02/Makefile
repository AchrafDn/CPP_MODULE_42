CC = c++ -std=c++98
Cflags = -Wall -Wextra -Werror -fsanitize=address -g3
CppFiles = main.cpp
Name = a.out
RM = rm -rf

OBJ = ${CppFiles:.cpp=.o}

all: $(Name)

$(Name): $(OBJ)
	$(CC) $(Cflags) $(OBJ) -fsanitize=address -g3 -o $(Name)

.cpp.o:
	$(CC) $(Cflags) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(Name)

re: fclean all 