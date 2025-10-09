#include "Plate.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Plate::Plate()
{
}

Plate::Plate( const Plate & src )
{
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
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Plate const & i )
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