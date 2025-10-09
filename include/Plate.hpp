#ifndef PLATE_HPP
# define PLATE_HPP

# include <iostream>
# include <string>

class Plate
{

	public:

		Plate();
		Plate( Plate const & src );
		~Plate();

		Plate &		operator=( Plate const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Plate const & i );

#endif /* *********************************************************** PLATE_H */