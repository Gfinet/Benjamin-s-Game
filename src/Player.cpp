#include "Player.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Player::Player()
{
}

Player::Player( const Player & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Player::~Player()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Player &				Player::operator=( Player const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Player const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */