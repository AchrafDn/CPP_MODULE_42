CC = c++
Cflags = -Wall -Wextra -Werror -std=c++98
Cfiles = main.cpp Fixed.cpp

Name = a.out
RM = rm -rf

OBJ = ${Cfiles:.cpp=.o}


all: $(Name)

$(Name) : $(OBJ)
	$(CC) $(Cflags) $(OBJ) -o $(Name)

.cpp.o:
	$(CC) $(Cflags) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(Name)

re : fclean all