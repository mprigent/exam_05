#include "Warlock.hpp"

Warlock::Warlock(std::string const &Wname, std::string const &Wtitle) // constructeur paramétrique
{
	this->_name = Wname;
	this->_title = Wtitle;
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() // destructeur
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName() const
{
	return (this->_name);
}

std::string const &Warlock::getTitle() const
{
	return (this->_title);
}

void Warlock::setTitle(std::string  const &newTitle) // set la valeur de l'attribut
{
	this->_title = newTitle;
}

void Warlock::introduce() const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}