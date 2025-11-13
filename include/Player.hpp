#ifndef PLAYER_HPP
# define PLAYER_HPP

# include <iostream>
# include <string>
# include "ACase.hpp"

class Player
{

	private:
		const std::string _name;
		ACase 		*_place;

	public:

		Player();
		Player( Player const & src );
		~Player();

		Player &		operator=( Player const & rhs );

};

std::ostream &			operator<<( std::ostream & o, Player const & i );

#endif /* ********************************************************** PLAYER_H */