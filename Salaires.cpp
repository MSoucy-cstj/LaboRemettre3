// But : D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et affiche son salaire. 
// Entrez -1 � la valeur des ventes pour quitter le programme. 
// Auteur : Mathieu Soucy
// Date : 2020-10-03


#include <iostream>

using namespace std;	// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	float vente;
	float salaire;

	cout << "Veuillez entrer vos ventes brutes (-1 pour quitter) : ";
	cin >> vente;

	while(vente != -1)
	{
		salaire = vente / 100 * 7.5 + 250;

		cout << "Votre salaire est de " << salaire << endl;
		system("pause");
		system("cls");
		
		cout << "Veuillez entrer vos ventes brutes (-1 pour quitter) : ";
		cin >> vente;

	}

	cout << "Fin du programme, bonne journ�e";

	return 0;
}

/*

vente - resultat
5000	625
9000	925
10000	1000

*/