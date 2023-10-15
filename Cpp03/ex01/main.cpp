#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap first( "Achraf" );
    ScavTrap second( first );

    first.attack( "Dadoun" );
    first.takeDamage( 10 );
    first.beRepaired( 10 );
    first.guardGate();

    return 0;
}