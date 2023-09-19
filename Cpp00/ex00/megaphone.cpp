#include <iostream>

int main(int ac, char **av)
{
    char upper;
    if (ac >= 2)
    {    
        for(int j = 2; j <= ac; j++)
        {
            for(int i = 0; av[j - 1][i]; i++)
            {
                upper = std::toupper(av[j - 1][i]);
                std::cout << upper;
            }
        }
    }
    else 
        std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
}
