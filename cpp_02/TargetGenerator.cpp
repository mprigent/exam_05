#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void	TargetGenerator::learnTargetType(ATarget *target) 
{
	for (size_t i = 0; i < this->_spells.size(); i++)
		if (this->_spells[i]->getType() == target->getType())
			return ;
	_spells.push_back(target->clone());
}

void	TargetGenerator::forgetTargetType(const std::string &type) 
{
	for (std::vector<ATarget *>::iterator it = _spells.begin(); it != _spells.end(); it++)
		if ((*it)->getType() == type)
		{
			delete *it;
			this->_spells.erase(it);
			return ;
		}
}

ATarget* TargetGenerator::createTarget(const std::string &type) 
{
	for (size_t i = 0; i < this->_spells.size(); i++)
		if (this->_spells[i]->getType() == type)
			return this->_spells[i];
	return (0);
}
