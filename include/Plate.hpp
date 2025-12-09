#ifndef PLATE_HPP
# define PLATE_HPP

# include <iostream>
# include <string>
# include "ACase.hpp"

class Plate
{

	private:
		ACase 	*_cases;
		char	**_display;

	public:

		Plate();
		Plate( Plate const & src );
		~Plate();

		Plate &		operator=( Plate const & rhs );

};

std::ostream &			operator<<( std::ostream & o, Plate const & i );

#endif /* *********************************************************** PLATE_H */