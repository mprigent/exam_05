#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(const ASpell &w) : _name(w._name), _effects(w._effects) {}

ASpell::ASpell(const std::string &name, const std::string &effects) : _name(name), _effects(effects) {}

ASpell::~ASpell() {} 

ASpell &ASpell::operator=(const ASpell &w)
{
	this->_name = w.getName();
	this->_effects = w.getEffects();
	return (*this);
}

const std::string &ASpell::getName() const 
{
	return this->_name;
}

const std::string &ASpell::getEffects() const 
{
	return this->_effects;
}

void	ASpell::launch(const ATarget &target) const 
{
	target.getHitBySpell(*this);
}