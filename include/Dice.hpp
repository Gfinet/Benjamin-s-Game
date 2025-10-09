#ifndef DICE_HPP
# define DICE_HPP

# include <iostream>
# include <string>

class Dice
{

	public:

		Dice();
		Dice( Dice const & src );
		~Dice();

		Dice &		operator=( Dice const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Dice const & i );

#endif /* ************************************************************ DICE_H */