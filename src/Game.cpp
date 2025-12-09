#include "Game.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Game::Game()
{
	_nbPlayer = (size_t)getPlayers();
	_players = new Player[_nbPlayer];
	try
	{
		setPlayer();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Game::Game( const Game & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Game::~Game()
{
	delete[] _players;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Game &				Game::operator=( Game const & rhs )
{
	if ( this != &rhs )
	{
		this->_plate = rhs._plate;
		this->_players = rhs._players;
		this->_nbPlayer = rhs._nbPlayer;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Game const & i )
{
	for (size_t j = 0; j < i.getNbPlayer(); j++)
	{
		o << "Player Name : " << i.getPlayer(j).getName();
		o << "\t" << i.getPlayer(j).getColor();
		o << std::endl;
	}
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Game::setPlayer()
{
	char buff[64] = "\0";
	std::string color[4] = {"RED", "BLUE", "YELLOW", "BLACK"};
	for (size_t i= 0; i < _nbPlayer; i++)
	{
		while (buff[0] == '\0' || buff[0] == '\n')
		{
			std::cout << "What's the name of player " << i + 1 << " ?" << std::endl;
			std::cin >> buff;
		}
		_players[i].setName(buff);
		_players[i].setColor(color[i]);
		buff[0] = '\0';
	}
	std::cout << *this << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Player& 	Game::getPlayer(size_t i) const
{
	return _players[i];
}
Player*		Game::getPlayers() const
{
	return _players;
}

size_t Game::getNbPlayer() const
{
	return _nbPlayer;
}

/* ************************************************************************** */