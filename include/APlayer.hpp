#ifndef APlayer_HPP
# define APlayer_HPP

# include <iostream>
# include <string>
# include "ACase.hpp"

class APlayer
{

	private:
		ACase 			*_case;
		size_t			_nbDrink,
						_place;
		std::string 	_name,
						_color;


	public:

		APlayer();
		APlayer( APlayer const & src );
		~APlayer();

		APlayer &		operator=( APlayer const & rhs );

		ACase 		*getCase() const;
		size_t 		getNbDrink() const;
		size_t 		getPlace() const;
		std::string getName() const;
		std::string getColor() const;

		void setCase(ACase*);
		void setNbDrink(size_t);
		void setPlace(size_t);
		void setName(std::string);
		void setColor(std::string);

};

std::ostream &			operator<<( std::ostream & o, APlayer const & i );

#endif /* ********************************************************** APlayer_H */