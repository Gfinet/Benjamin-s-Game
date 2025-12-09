
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
	char chPlay[64] = "\0";

	while (nbPlayer < 2 || nbPlayer > MAX_PLAYER)
	{
		chPlay[0] = '\0';
		while (!isValid(chPlay))
		{
			std::cout << "How much player?" << std::endl;
			std::cin >> chPlay;
		}
		nbPlayer = atoi(chPlay);
		if (nbPlayer < 2 || nbPlayer > MAX_PLAYER)
			std::cout << "Please enter a number between 2 and 100 (included)" << std::endl;
	}
	return nbPlayer;
}

