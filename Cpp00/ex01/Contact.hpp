#ifndef CONTACT_HPP
# define CONATCT_HPP

#include<iostream>

class Contact{
	private:
		std::string	f_name;
		std::string	l_name;
		std::string	n_name;
		std::string	secret;
		std::string	phone;
		int			index;
	public:
		Contact();
		std::string get_f_name();
		std::string get_l_name();
		std::string get_n_name();
		std::string get_secret();
		std::string get_phone();
		int			get_index();
		void		set_f_name(std::string F_name);
		void		set_l_name(std::string L_name);
		void		set_n_name(std::string N_name);
		void		set_secret(std:: string Secret);
		void		set_phone(std::string Phone);
		void		set_index(int index);
};

#endif