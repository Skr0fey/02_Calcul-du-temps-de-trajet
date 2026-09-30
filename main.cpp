/* --------------------------- 
Laboratoire : 02
Auteur(s) : Tymofii Skriabin
Date : 30.09.2026
But : Calcul du temps de trajet 
Remarque(s) : 
--------------------------- */
#include <iostream> //notre cin et cout
#include <cmath> //pour utilise sqrt(√)
#include <cstdlib> //EXIT_SUCCESS

using namespace std; //std bla-bla-bla

int main()
{
   double dx,dy,s1,s2,L1;

   // je peux faire comme ca? cin >> dx >> dy >> s1 >> s2 >> L1;
   cout << "Entrez la distance horizontale dx : " << endl;
   cin >> dx;

   cout << "Entrez la distance verticale dy : " << endl;
   cin >> dy;

   cout << "Entrez la vitesse sur la route s1 : " << endl;
   cin >> s1;

   cout << "Entrez la vitesse sur le terrain rocheux s2 : " << endl;
   cin >> s2;

   cout << "Entrez la longueur du premier segment L1 : " << endl;
   cin >> L1;

   double L2 = sqrt((dx-L1) * (dx-L1) + dy * dy);

   double temps1 = L1/s1;

   double temps2 = L2/s2;

   double tempstotal = temps1 + temps2;

   cout << "Temps total : " << tempstotal << " heures " << endl; //juste heures? je peux faite comme ca?

   return EXIT_SUCCESS;
}