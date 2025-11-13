#ifndef ACASE_HPP
# define ACASE_HPP

# include <iostream>
# include <string>

class ACase
{

	public:

		ACase();
		ACase( ACase const & src );
		virtual ~ACase();

		ACase &		operator=( ACase const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, ACase const & i );

#endif /* ************************************************************ ACASE_H */