#include "Warlock.hpp"

Warlock::Warlock(std::string const & name, std::string const & title): name(name), title(title)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	for(std::list<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
		delete *it;
	this->spells.clear();
	std::cout << this->name << ": My job here is done!" << std::endl;
}

void		Warlock::introduce(void) const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void		Warlock::learnSpell(ASpell * spell)
{
	for(std::list<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	this->spells.push_back(spell->clone());
}

void		Warlock::forgetSpell(std::string const & name)
{
	for(std::list<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
	{
		if ((*it)->getName() == name)
		{
			delete *it;
			this->spells.erase(it);
			return ;
		}
	}
}

void		Warlock::launchSpell(std::string const & name, ATarget const & target)
{
	for(std::list<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
	{
		if ((*it)->getName() == name)
			(*it)->launch(target);
	}
}


std::string const &	Warlock::getName(void) const
{ return this->name; }

std::string const &	Warlock::getTitle(void) const
{ return this->title; }

void			Warlock::setTitle(std::string const & title)
{ this->title = title; }
