#ifndef PAWN_HPP
# define PAWN_HPP

# include <iostream>
# include <string>

class Pawn
{

	public:

		Pawn();
		Pawn( Pawn const & src );
		~Pawn();

		Pawn &		operator=( Pawn const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Pawn const & i );

#endif /* ************************************************************ PAWN_H */