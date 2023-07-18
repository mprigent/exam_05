#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
		Fireball();
		virtual ~Fireball();					// destructeur (classe abstraite)
		
		virtual Fireball	*clone() const;		// fonction membre virtuelle pure
};

#endif