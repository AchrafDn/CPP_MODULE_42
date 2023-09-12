#include "PhoneBook.hpp"

int	ft_strcmp(std::string s1, std::string s2)
{
	size_t				i;
	std::string	a1;
	std::string	a2;

	a1 = s1;
	a2 = s2;
	i = 0;
	while ((a1[i] != '\0' || a2[i] != '\0'))
	{
		if (a1[i] != a2[i])
			return (a1[i] - a2[i]);
		i++;
	}
	return (0);
}

int is_alpha(std::string str)
{
	int i = 0;

	if (str[0] == '\0')
		return(1);
	while (str[i])
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] >122))
			return(1);
		i++;
	}
	return (0);
}

int	is_digit(std::string str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
		return(1);
	while(str[i])
	{
		if (str[i] > 57 || str[i] < 48)
			return(1);
		i++;
	}
	return (0);
}

int	is_alpha_num(std::string str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return(1);
	while (str[i])
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] >122) && (str[i] > 57 || str[i] < 48))
			return (1);
		i++;
	}
	return (0);
}

int	check_valid(std::string temp[5])
{
	for(int i = 0; i < 5; i++)
	{
		switch (i){
			case 0:
			{
				if (is_alpha(temp[i]) == 1)
				{
					std::cout << "Error: Enter a valid first name"<<std::endl;
					return (-1);
				}
				break;
			}
			case 1:
			{
				if (is_alpha(temp[i]) == 1)
				{
					std::cout << "Error: Enter a valid last name"<<std::endl;
					return (-1);
				}
				break;
			}
			case 2:
			{
				if (is_alpha(temp[i]) == 1)
				{
					std::cout << "Error: Enter a valid nick name"<<std::endl;
					return (-1);
				}
				break;
			}
			case 3:
			{
				if (is_alpha_num(temp[i]) == 1)
				{
					std::cout << "Error: Enter a valid darkest secret"<<std::endl;
					return (-1);
				}
				break;
			}
			case 4:
			{
				if (is_digit(temp[i]) == 1)
				{
					std::cout << "Error: Enter a valid phone number"<<std::endl;
					return (-1);
				}
				break;
			}
		}
	}
	return(0);
}

static int	ft_res(int signe)
{
	if (signe > 0)
		return (-1);
	else
		return (0);
}

int	ft_atoi(std::string str)
{
	size_t	i;
	int		p;
	size_t	res;

	res = 0;
	p = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			p = -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = (res * 10) + (str[i] - 48);
		if (res > 9223372036854775807)
			return (ft_res(p));
		i++;
	}
	return (res * p);
}

std::string* get_data(std::string	temp[5])
{
	std::cout<< std::left;
	std::cout << std::setw(21) << "Enter first name" << ":";
	if (!getline(std::cin, temp[0]))
	{
		std::cout << "END OF FILE" << std::endl;
		exit(0);
	}
	std::cout << std::setw(21) <<"Enter last name" << ":";
	if (!getline(std::cin, temp[1]))
	{
		std::cout << "END OF FILE" << std::endl;
		exit(0);
	}
	std::cout << std::setw(21) <<"Enter nick name" << ":";
	if (!getline(std::cin, temp[2]))
	{
		std::cout << "END OF FILE" << std::endl;
		exit(0);
	}
	std::cout << std::setw(21) <<"Enter darkest secret" << ":";
	if (!getline(std::cin, temp[3]))
	{
		std::cout << "END OF FILE" << std::endl;
		exit(0);
	}
	std::cout << std::setw(21) <<"Enter phone number" << ":";
	if (!getline(std::cin, temp[4]))
	{
		std::cout << "END OF FILE" << std::endl;
		exit(0);
	}
	return (temp);
}

int main()
{
	PhoneBook	phonebook;

	std::string cmd;
	std::string temp[5];
	std::string* temp_ptr;

	while(1)
	{
		std::cout <<"~-------------------------------------------~" << std::endl;
		std::cout <<"# Enter your command [ADD, SEARCH, EXIT]:"<<std::endl;
		if (!getline(std::cin, cmd))
		{
			std::cout << "END OF FILE" << std::endl;
			exit(0);
		}
		if(ft_strcmp("ADD", cmd) == 0)
		{	
			temp_ptr = get_data(temp);
			if (check_valid(temp_ptr) == 0)
				phonebook.add_contact(temp_ptr);
		}
		else if(ft_strcmp("SEARCH", cmd) == 0)
		{
			phonebook.show_details();
		}
		else if(ft_strcmp("EXIT", cmd) == 0)
		{
			break;
		}
	}
}
