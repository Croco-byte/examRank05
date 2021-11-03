#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <iostream>
#include <list>

#include "ASpell.hpp"

class	SpellBook
{
	private:
		std::list<ASpell *>	spells;

		SpellBook(SpellBook const & src);
		SpellBook &	operator=(SpellBook const & rhs);

	public:
		SpellBook();
		~SpellBook();

		void		learnSpell(ASpell * spell);
		void		forgetSpell(std::string const & name);
		ASpell *	createSpell(std::string const & name);
};


#endif
