

#include <iostream>
#include "checkStart.hpp"




int main(int ac, char **av)
{
	(void)av;
	(void)ac;

	int nbPlay = getPlayers();
	std::cout << nbPlay << std::endl;
	return 0;
}