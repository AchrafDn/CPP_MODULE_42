#include "Contact.hpp"

Contact::Contact()
{
	f_name = "";
	l_name = "";
	n_name = "";
	secret = "";
	phone = "";
	index = 0;
}
	
std::string Contact::get_f_name()
{
	return (f_name);
}

std::string Contact::get_l_name()
{
	return (l_name);
}

std::string Contact::get_n_name()
{
	return (n_name);
}

std::string Contact::get_secret()
{
	return (secret);
}
std::string Contact::get_phone()
{
	return (phone);
}

int Contact::get_index()
{
	return (index);
}

void	Contact::set_f_name(std::string F_name)
{
	f_name = F_name;
}

void	Contact::set_l_name(std::string L_name)
{
	l_name = L_name;
}

void	Contact::set_n_name(std::string N_name)
{
	n_name = N_name;
}

void	Contact::set_secret(std:: string Secret)
{
	secret = Secret;
}

void	Contact::set_phone(std::string Phone)
{
	phone = Phone;
}

void	Contact::set_index(int Index)
{
	index = Index;
}