#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include "ASpell.hpp"
# include <vector>

class Warlock
{
	private:
		std::string			_name;
		std::string			_title;
		SpellBook           _book;		// tableau pour stocker les sorts que le sorcier connait 

	// constructeur par copie, défaut et operateur en privé pour ne pouvoir instancier que grace au constructeur paramétrique 
		Warlock();																// constructeur par défaut
		Warlock(const Warlock &);												// constructeur par copie
		Warlock &operator= (const Warlock &);									// operateur d'assignation

	public:
		Warlock(const std::string &, const std::string &);						// constructeur paramétrique
		~Warlock();																// destructeur

		// accès en lecture: récupère la valeur de l'attribut, ne modifie pas l'instance courante (Renvoie une copie de l'attribut (si valeur modifiée, l'état de la class ne change pas)
		const std::string	&getName() const;
		const std::string	&getTitle() const;

		// accès en écriture: set la valeur de l'attribut
		void				setTitle(const std::string &);
		void				introduce() const;

		void				learnSpell(ASpell *);								// prend un pointeur sur ASpell et fait apprendre un spell au Warlock
		void				forgetSpell(const std::string &);					// prend une string (un nom de sort) et le fait oublier au Warlock -> le Warlock l'oubli (si le sort n'est pas connu, le Warlock ne fait rien)
		void				launchSpell(const std::string &, const ATarget &);	// prend une string (un nom de sort) ET une reference sur ATarget -> lance le sort sur la target selectionnée (ne fait rien si sort pas connu)
};


#endif