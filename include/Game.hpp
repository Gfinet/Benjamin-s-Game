#ifndef GAME_HPP
# define GAME_HPP

# include <iostream>
# include <string>
# include "Player.hpp"
# include "Plate.hpp"
# include "checkStart.hpp"

class Game
{
	private:
		Player 	*_players;
		size_t	_nbPlayer;
		Plate 	_plate;

		void setPlayer();

	public:

		Game();
		Game( Game const & src );
		~Game();

		Game &		operator=( Game const & rhs );

		Player& 	getPlayer(size_t) const;
		Player*		getPlayers() const;
		size_t		getNbPlayer() const;
};

std::ostream &			operator<<( std::ostream & o, Game const & i );

#endif /* ************************************************************ GAME_H */