/*But :  donne la possibilité à l’utilisateur de deviner le nombre contenu dans iRandom. 
L’utilisateur a un maximum de 5 chances. 
Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et 100 et lui indique 
s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un nombre.

Défi : Le programme pourrait indiquer si la valeur à trouver est plus grande
ou plus petite que la dernière proposition que l'utilisateur a faite.
*/ 

// Auteur : Mathieu Soucy
// Date : 2020-10-03


#include <iostream>
#include <time.h> 
using namespace std; 

int main() {    
int iRandom = 0;   // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur 

srand(time(0));  // pour activer l’aléatoire dans le programme    iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom }
iRandom = rand() % 101;

setlocale(LC_ALL, "");



// Déclaration des variables
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
cout << "La réponse était " << iRandom << endl;

cout << "Fin de partie.";

	return 0;
}