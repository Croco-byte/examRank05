#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class	Warlock
{
	private:
		Warlock();
		Warlock(Warlock const & src);
		Warlock & operator=(Warlock const & rhs);

		std::string		name;
		std::string		title;
		std::vector<ASpell *>	spells;
	
	public:
		Warlock(std::string const & iname, std::string const & ititle);
		~Warlock();

		void			introduce(void)	const;
		void			learnSpell(ASpell * spell);
		void			forgetSpell(std::string const & spellname);
		void			launchSpell(std::string const & spellname, ATarget const & target) const;

		std::string const &	getName(void)	const;
		std::string const &	getTitle(void)	const;

		void			setTitle(std::string const & new_title);
};



#endif
