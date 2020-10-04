/*But :  donne la possibilit� � l�utilisateur de deviner le nombre contenu dans iRandom. 
L�utilisateur a un maximum de 5 chances. 
Le programme v�rifie que l�utilisateur a bien entr� un nombre entre 0 et 100 et lui indique 
s�il gagne ou dans le cas contraire lui indique le nombre d�essais restant et lui redemande un nombre.

D�fi : Le programme pourrait indiquer si la valeur � trouver est plus grande
ou plus petite que la derni�re proposition que l'utilisateur a faite.
*/ 

// Auteur : Mathieu Soucy
// Date : 2020-10-03


#include <iostream>
#include <time.h> 
using namespace std; 

int main() {    
int iRandom = 0;   // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur 

srand(time(0));  // pour activer l�al�atoire dans le programme    iRandom = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom }
iRandom = rand() % 101;

setlocale(LC_ALL, "");



// D�claration des variables
int choix = -69;
int tentatives = 5;

while (tentatives > 0 && choix != iRandom)
{
	cout << "Deviner le nombre entre 1 et 100 : ";
	cin >> choix;
	tentatives--;
	cout << "Le nombre n'est pas " << choix << endl;

	if (choix > iRandom)
		cout << "Le nombre est plus bas." << endl;
	if (choix < iRandom)
		cout << "Le nombre est plus haut." << endl;

	cout << "Il reste " << tentatives << " tentatives." << endl;
	system("pause");
	system("cls");
}

if (choix == iRandom)
cout << "Bravo, le nombre est bel et bien " << choix << endl;
else
cout << "La r�ponse �tait " << iRandom << endl;

cout << "Fin de partie.";

	return 0;
}