#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <stdlib.h>

class  PhoneBook{
	private:
        Contact con[8];
	    int		index_contact;
	    int		number_of_contacts;
    public:
	    PhoneBook();
	    void	set_indexContact(int Num_con);
        int		get_indexContact();
	    int		get_numberofContact();
	    void	add_contact(std::string temp[5]);
	    void	show_details();
};

int	ft_atoi(std::string str);
int	is_digit(std::string str);
#endif