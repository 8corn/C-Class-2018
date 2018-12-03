//
//  main.c
//  Exercice 5 _ Série N°2 boucle Strutures alternatives repetitives
//
//  Created by Aymen charmi on 11/30/18.
//  Copyright © 2018 Aymen charmi. All rights reserved.
//

/* Exercice 5:
 ----------
 Calculez le nombre lu à rebours d'un nombre positif entré au clavier en supposant que le
 fichier d'entrée standard contient une suite de chiffres non nuls, terminée par zéro
 (Contrôlez s'il s'agit vraiment de chiffres). Exemple: Entrée: 1 2 3 4 0 Affichage: 4321
 */

#include <stdio.h>
int main()
{
    int  X;       /* Le chiffre courant        */
    int  N=0;     /* Le compteur des décimales */
    long VALD=1;  /* Valeur de la position décimale courante */
    long NOMB=0;  /* Le nombre résultat                      */
    do
    {
        printf("Entrez le %d%s chiffre : ", (N+1), (N)?"e":"er");
        scanf("%d", &X);
        
        if (X<0||X>9)
            printf("\a");
        else if (X)
        {
            NOMB += VALD*X;
            N++;
            VALD *= 10;
        }
        else
            printf("La valeur du nombre renversé est %ld\n", NOMB);
    }
    while (X);
    return 0;
}


/*
Remarque :

En remplaçant la ligne

NOMB += VALD*X;

par

NOMB += pow(10, N)*X;

on n'a plus besoin de la variable VALD. Il faut cependant inclure les fonctions de la bibliothèque <math>. D'autre part, le calcul de 10N serait alors répété à chaque exécution de la boucle.

Finalement, cette variante est plus lente et plus volumineuse que la première.
*/
