#include "Sed.hpp"

void	replace_str(char	**av)
{
	std::string		file_name = av[1];
	std::string		old_str = av[2];
	std::string		new_str = av[3];
	std::string		line;
	size_t	index = 0;
	size_t	position = 0;

	std::ifstream	in_file(file_name);
	std::ofstream	out_file(file_name + ".replace");
	std::getline(in_file, line, '\0');
	if(av[2][0] == '\0')
	{
		index = line.length();
		line.erase(index, 1);
		line.insert(index, new_str); 
	}
	else
	{
		index = line.find(old_str, 0);
		while (index != std::string::npos)
		{
			line.erase(index, old_str.length());
			line.insert(index, new_str);
			position = index + new_str.length();
			index = line.find(old_str, position);
		}
	}
	out_file << line;
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Syntax error: <filename> string1 string2" << std::endl;
		exit (EXIT_FAILURE);
	}
	replace_str(av);
	return (0);
}