#include "SpellBook.hpp"

SpellBook::SpellBook(): spells()
{}

SpellBook::~SpellBook()
{
	for (std::list<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
		delete *it;
	this->spells.clear();
}

void		SpellBook::learnSpell(ASpell * spell)
{
	for (std::list<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	this->spells.push_back(spell->clone());
}

void		SpellBook::forgetSpell(std::string const & name)
{
	for (std::list<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
	{
		if ((*it)->getName() == name)
		{
			delete *it;
			this->spells.erase(it);
			return ;
		}
	}
}

ASpell *	SpellBook::createSpell(std::string const & name)
{
	for (std::list<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
	{
		if ((*it)->getName() == name)
			return (*it);
	}
	return (0);
}
