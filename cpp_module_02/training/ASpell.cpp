#include "ASpell.hpp"

ASpell::ASpell(): name(), effects()
{}

ASpell::ASpell(std::string const & name, std::string const & effects): name(name), effects(effects)
{}

ASpell::ASpell(ASpell const & src): name(src.name), effects(src.effects)
{}

ASpell::~ASpell()
{}

ASpell &		ASpell::operator=(ASpell const & rhs)
{
	this->name = rhs.name;
	this->effects = rhs. effects;
	return (*this);
}

void			ASpell::launch(ATarget const & target)
{ target.getHitBySpell(*this); }


std::string const &	ASpell::getName(void) const
{ return this->name; }

std::string const &	ASpell::getEffects(void) const
{ return this->effects; }
