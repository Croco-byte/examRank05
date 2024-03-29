#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class	ATarget
{
	private:
		std::string	type;

	public:
		ATarget();
		ATarget(std::string const & type);
		ATarget(ATarget const & src);
		virtual ~ATarget();

		ATarget &	operator=(ATarget const & rhs);

		virtual ATarget *	clone(void) const = 0;
		void			getHitBySpell(ASpell const & spell) const;		


		std::string const &	getType(void)		const;
};



#endif
