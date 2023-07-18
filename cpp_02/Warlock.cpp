#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title) 
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() 
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string	const &Warlock::getName() const 
{
	return this->_name;
}

std::string	const &Warlock::getTitle() const 
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

void	Warlock::learnSpell(ASpell *spell)
{
	this->_book.learnSpell(spell);
}

void	Warlock::forgetSpell(const std::string &name)
{
	this->_book.forgetSpell(name);
}

void	Warlock::launchSpell(const std::string &name, const ATarget &target) 
{
	ASpell *spell;
	spell = this->_book.createSpell(name);
	if (spell)
		spell->launch(target);
}