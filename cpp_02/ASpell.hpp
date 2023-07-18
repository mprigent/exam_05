#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>
# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected:
		std::string _name;
		std::string _effects;

	public:
		ASpell();											// constructeur par défaut
		ASpell(const ASpell &);								// constructeur par copie
		ASpell(const std::string &, const std::string &);	// constructeur paramétrique
		virtual ~ASpell(); 									// destructeur (classe abstraite)
		ASpell	&operator=(const ASpell &);					// operateur d'assignation
		
		const std::string &getName() const;
		const std::string &getEffects() const;

		virtual ASpell	*clone() const = 0;					// fonction membre virtuelle pure
		void			launch(const ATarget &) const;		
};

#endif