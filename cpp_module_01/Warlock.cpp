#include "Warlock.hpp"

Warlock::Warlock(std::string const & iname, std::string const & ititle): name(iname), title(ititle), spells()
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
	for (std::vector<ASpell *>::iterator it = (this->spells).begin(); it != (this->spells).end(); it++)
		delete *it;
	(this->spells).clear();
}

void				Warlock::introduce(void) const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void				Warlock::learnSpell(ASpell * spell)
{
	for (std::vector<ASpell *>::iterator it = (this->spells).begin(); it != (this->spells).end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	this->spells.push_back(spell);
}

void				Warlock::forgetSpell(std::string const & spellname)
{
	for (std::vector<ASpell *>::iterator it = (this->spells).begin(); it != (this->spells).end(); it++)
	{
		if ((*it)->getName() == spellname)
		{
			delete *it;
			this->spells.erase(it);
			return ;
		}
	}
}

void				Warlock::launchSpell(std::string const & spellname, ATarget const & target) const
{
	for (std::vector<ASpell *>::const_iterator it = (this->spells).begin(); it != (this->spells).end(); it++)
	{
		if ((*it)->getName() == spellname)
		{
			target.getHitBySpell(*(*it));
			return ;
		}
	}
}

std::string const &		Warlock::getName(void) const
{ return (this->name); }

std::string const &		Warlock::getTitle(void) const
{ return (this->title); }

void				Warlock::setTitle(std::string const & new_title)
{ this->title = new_title; }
