#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void	SpellBook::learnSpell(ASpell *spell) 
{
	for (size_t i = 0; i < this->_spells.size(); i++)
		if (this->_spells[i]->getName() == spell->getName())
			return ;
	_spells.push_back(spell->clone());
}

void	SpellBook::forgetSpell(const std::string &name) 
{
	for	(std::vector<ASpell *>::iterator it = _spells.begin(); it != _spells.end(); it++)
		if ((*it)->getName() == name)
		{
			delete *it;
			this->_spells.erase(it);
			return ;
		}
}

ASpell* SpellBook::createSpell(const std::string &name)
{
    for (size_t i = 0; i < this->_spells.size(); i++)
        if (this->_spells[i]->getName() == name)
            return this->_spells[i];
    return (0);
}