#include "PA.h"

PA::PA(string n, string p, int a, int cne, int matricule, string thema):
	Etudiant(n,p,a,cne),Professeur(n,p,a,matricule),Personne(n,p,a)
{
	this->thematique = thema;
}

void PA::afficher() const
{
	//this->Etudiant::afficher(); 
	//this->Professeur::afficher();
	std::cout << "thematique: " << this->thematique << std::endl;
}
