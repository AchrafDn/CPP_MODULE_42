CC = c++ -std=c++98
Cflags = -Wall -Wextra -Werror
Cfiles = megaphone.cpp

Name = megaphone
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