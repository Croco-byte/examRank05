#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <list>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class	Warlock
{
	private:
		std::string	name;
		std::string	title;
		
		SpellBook	book;	

		Warlock();
		Warlock(Warlock const & src);
		Warlock &	operator=(Warlock const & rhs);
	
	public:
		Warlock(std::string const & name, std::string const & title);
		~Warlock();

		void		introduce(void) const;
		void		learnSpell(ASpell * spell);
		void		forgetSpell(std::string const & name);
		void		launchSpell(std::string const & name, ATarget const & target);

		std::string const &	getName(void) const;
		std::string const &	getTitle(void) const;

		void			setTitle(std::string const & title);
};



#endif
