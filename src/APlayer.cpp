#include "APlayer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

APlayer::APlayer()
{
}

APlayer::APlayer( const APlayer & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

APlayer::~APlayer()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

APlayer &				APlayer::operator=( APlayer const & rhs )
{
	if ( this != &rhs )
	{
		this->_case = rhs._case;
		this->_place = rhs._place;
		this->_nbDrink = rhs._nbDrink;
		this->_color = rhs._color;
		this->_name = rhs._name;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, APlayer const & i )
{
	(void)i;
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

ACase 		*APlayer::getCase() const
{
	return _case;
}

size_t 		APlayer::getNbDrink() const
{
	return _nbDrink;
}

size_t 		APlayer::getPlace() const
{	
	return _place;
}

std::string APlayer::getName() const
{
	return _name;
}

std::string APlayer::getColor() const
{
	return _color;
}


void APlayer::setCase(ACase* Case)
{
	_case = Case;
}

void APlayer::setNbDrink(size_t nb)
{
	_nbDrink = nb;
}

void APlayer::setPlace(size_t pl)
{
	_place = pl;
}

void APlayer::setName(std::string nam)
{
	_name = nam;
}

void APlayer::setColor(std::string col)
{
	_color = col;
}


/* ************************************************************************** */