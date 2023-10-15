CC = c++
Cflags = -Wall -Wextra -Werror
CppFiles = main.cpp Zombie.cpp zombieHorde.cpp
Name = Zombie
RM = rm -rf

OBJ = ${CppFiles:.cpp=.o}

all: $(Name)

$(Name): $(OBJ)
	$(CC) $(Cflags) $(OBJ) -o $(Name)

.cpp.o:
	$(CC) $(Cflags) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(Name)

re: fclean all 