#include "ACase.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ACase::ACase()
{
}

ACase::ACase( const ACase & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ACase::~ACase()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ACase &				ACase::operator=( ACase const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ACase const & i )
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