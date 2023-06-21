#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#pragma once
#include <iostream>

class Warlock
{
	private :
		std::string _name;
		std::string _title;

		// constructeur par copie, défaut et operateur en privé pour ne pouvoir instancier que grace au constructeur paramétrique 
		Warlock (); 													// constructeur par défaut
		Warlock (const Warlock &); 										// constructeur par copie
		Warlock &operator=(const Warlock &);							// opérateur d'assignation

	public :
		Warlock (const std::string &, const std::string &);				//constructeur paramétrique
		~Warlock ();													//destructeur

		// accès en lecture: récupère la valeur de l'attribut, ne modifie pas l'instance courante (Renvoie une copie de l'attribut (si valeur modifiée, l'état de la class ne change pas)
		const std::string	&getName() const;
		const std::string	&getTitle() const;

		// accès en écriture: set la valeur de l'attribut
		void				setTitle(std::string const &newTitle);
		void				introduce() const;
};

#endif