#ifndef DUMMY_HPP
# define DUMMY_HPP

# include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		Dummy();
		virtual ~Dummy();				// destructeur (classe abstraite)
		
		virtual Dummy *clone() const;	// fonction membre virtuelle pure
};

#endif