#ifndef ATARGET_HPP
# define ATARGET_HPP

# include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected :
		std::string _type;

	public :
		ATarget();									// constructeur par défaut
		ATarget(const ATarget &w);					// constructeur par copie
		ATarget(const std::string &);				// constructeur paramétrique
		virtual ~ATarget();							// destructeur (classe abstraite)
		ATarget	&operator=(const ATarget &w);		// operateur d'assignation
		
		const std::string	&getType() const;
		
		virtual ATarget		*clone() const = 0;		// fonction membre virtuelle pure
		void				getHitBySpell(const ASpell &spell) const;
};

#endif