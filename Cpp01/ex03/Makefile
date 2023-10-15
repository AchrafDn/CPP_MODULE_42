CC = c++
Cflags = -Wall -Wextra -Werror
CppFiles = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
Name = Human
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