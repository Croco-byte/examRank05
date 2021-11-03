#include "Warlock.hpp"

Warlock::Warlock(std::string const & name, std::string const & title): name(name), title(title)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

void		Warlock::introduce(void) const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void		Warlock::learnSpell(ASpell * spell)
{
	this->book.learnSpell(spell);
}

void		Warlock::forgetSpell(std::string const & name)
{
	this->book.forgetSpell(name);
}

void		Warlock::launchSpell(std::string const & name, ATarget const & target)
{
	ASpell *temp = this->book.createSpell(name);
	if (temp)
		temp->launch(target);
}


std::string const &	Warlock::getName(void) const
{ return this->name; }

std::string const &	Warlock::getTitle(void) const
{ return this->title; }

void			Warlock::setTitle(std::string const & title)
{ this->title = title; }
