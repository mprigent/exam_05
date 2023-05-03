#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(const std::string &type) : _type(type) {}

ATarget::ATarget(const ATarget &w) : _type(w._type) {}

ATarget::~ATarget() {}

ATarget	&ATarget::operator=(const ATarget &w)
{
	this->_type = w.getType();
	return (*this);
}

const std::string	&ATarget::getType() const 
{
	return this->_type;
}

void	ATarget::getHitBySpell(const ASpell &spell) const 
{
	std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
}