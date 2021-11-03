#include "Warlock.hpp"

Warlock::Warlock(std::string const & iname, std::string const & ititle): name(iname), title(ititle)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

void				Warlock::introduce(void) const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

std::string const &		Warlock::getName(void) const
{ return (this->name); }

std::string const &		Warlock::getTitle(void) const
{ return (this->title); }

void				Warlock::setTitle(std::string const & new_title)
{ this->title = new_title; }
