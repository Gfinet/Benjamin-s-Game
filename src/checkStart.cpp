
#include "checkStart.hpp"


bool isNum(int c)
{
	return (c > '0' && c < '9');
}



bool isValid(char *x)
{
	if (!x || !x[0])
		return false;
	for (int i = 0; x[i]; i++)
	{
		if (i > 3)
			return false;
		if (!isNum(x[i]))
			return false;
	}
	return true; // check num
}

int getPlayers()
{
	int nbPlayer = 0;
	char chPlay[4] = "\0";

	std::cout << "yo\n";
	while (!isValid(chPlay))
	{
		std::cout << "Combien de joueurs serez-vous?" << std::endl;
		std::cin >> chPlay;
	}
	nbPlayer = atoi(chPlay);
	return nbPlayer;
}

