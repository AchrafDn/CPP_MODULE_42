CC = c++ -std=c++98
Cflags = -Wall -Wextra -Werror
Cfiles = Contact.cpp PhoneBook.cpp ex01.cpp

Name = myPhoneBook
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