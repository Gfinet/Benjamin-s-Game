#ifndef CASE_HPP
# define CASE_HPP

# include <iostream>
# include <string>

class Case
{

	public:

		Case();
		Case( Case const & src );
		~Case();

		Case &		operator=( Case const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Case const & i );

#endif /* ************************************************************ CASE_H */