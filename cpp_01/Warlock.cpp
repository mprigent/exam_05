#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title) 
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() 
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName() const 
{
	return this->_name;
}

const std::string &Warlock::getTitle() const 
{
	return this->_title;
}

void	Warlock::setTitle(const std::string &newTitle) 
{
	this->_title = newTitle;
}

void Warlock::introduce() const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *s) 
{
	for (size_t i = 0; i < this->_spells.size(); i++)
		if (this->_spells[i]->getName() == s->getName())
			return ;
	_spells.push_back(s->clone());
}

void	Warlock::forgetSpell(const std::string &name) 
{
	for	(std::vector<ASpell *>::iterator it = _spells.begin(); it != _spells.end(); it++)
		if ((*it)->getName() == name)
		{
			delete *it;
			this->_spells.erase(it);
			return ;
		}
}

void	Warlock::launchSpell(const std::string &name, const ATarget &target) 
{
	for (size_t i = 0; i < this->_spells.size(); i++)
		if (this->_spells[i]->getName() == name)
			return this->_spells[i]->launch(target);
}
