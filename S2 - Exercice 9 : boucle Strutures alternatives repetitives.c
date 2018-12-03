//
//  main.c
//  Exercice 9 _ Série N°2 boucle Strutures alternatives repetitives
//
//  Created by Aymen charmi on 11/30/18.
//  Copyright © 2018 Aymen charmi. All rights reserved.
//

/* Exercice 9:
 ----------
 Affiche la table des produits pour N variant de 1 à 10 :
 */

#include <stdio.h>
int main()
{
    const int MAX = 10; /* nombre de lignes et de colonnes */
    int I;              /* compteur des lignes   */
    int J;              /* compteur des colonnes */

    
    /* Affichage de l'en-tête */
    printf(" X*Y |");
    for (J=0 ; J<=MAX ; J++)
        printf("%4d", J);
    printf("\n");
    printf("------");
    for (J=0 ; J<=MAX ; J++)
        printf("----");
    printf("\n");
    
    /* Affichage du tableau */
    for (I=0 ; I<=MAX ; I++)
    {
        printf("%3d  |", I);
        for (J=0 ; J<=MAX ; J++)
            printf("%4d", I*J);
        printf("\n");
    }
    return 0;
}
