//
//  main.c
//  Exercice 4 _ Série N°2 boucle Strutures alternatives repetitives
//
//  Created by Aymen charmi on 11/30/18.
//  Copyright © 2018 Aymen charmi. All rights reserved.
//

/* Exercice 4:
 ----------
Calculez la somme, le produit et la moyenne d'une suite de chiffres non nuls entrés au
 clavier, sachant que la suite est terminée par zéro. Retenez seulement les chiffres
 (0, 1 ... 9) lors de l'entrée des données et effectuez un signal sonore si les
 données sortent de ce domaine.
 */

#include <stdio.h>
int main()
{
    int  X;      /* Le chiffre courant      */
    int  N=0;    /* Le compteur des données */
    int  SOM=0;  /* La somme actuelle       */
    long PROD=1; /* Le produit actuel  -  Type long à */
    /* cause de la grandeur du résultat. */
    
    do
    {
        /* Saisie des données (pour perfectionnistes) */
        printf("Entrez le %d%s chiffre : ", (N+1), (N)?"e":"er");
        scanf("%d", &X);
        
        if (X<0||X>9)
            printf("\a");
        else if (X)
        {
            N++;
            SOM+=X;
            PROD*=X;
        }
        else if (!X && N>0)
        {/* Seulement si au moins un chiffre a été accepté */
            printf("La somme   des chiffres est %d \n", SOM);
            printf("Le produit des chiffres est %ld\n", PROD);
            printf("La moyenne des chiffres est %f \n", (float)SOM/N);
        }
    }
    while (X);
    return 0;
}
