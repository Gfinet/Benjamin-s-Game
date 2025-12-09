#include "Plate.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Plate::Plate()
{
}

Plate::Plate( const Plate & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Plate::~Plate()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Plate &				Plate::operator=( Plate const & rhs )
{
	if ( this != &rhs )
	{
		this->_cases = rhs._cases;
		this->_display = rhs._display;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Plate const & i )
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


/* ************************************************************************** */