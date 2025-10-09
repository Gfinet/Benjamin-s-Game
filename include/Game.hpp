#ifndef GAME_HPP
# define GAME_HPP

# include <iostream>
# include <string>
# include "Player.hpp"
# include "Plate.hpp"

class Game
{
	private:
		Player 	*_players;
		size_t	_nbPlayer;
		Plate 	_plate;


	public:

		Game();
		Game( Game const & src );
		~Game();

		Game &		operator=( Game const & rhs );

};

std::ostream &			operator<<( std::ostream & o, Game const & i );

#endif /* ************************************************************ GAME_H */