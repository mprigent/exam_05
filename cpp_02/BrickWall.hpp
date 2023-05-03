#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
		BrickWall();
		virtual ~BrickWall();				// destructeur (classe abstraite)
		
		virtual BrickWall *clone() const;	// fonction membre virtuelle pure
};

#endif