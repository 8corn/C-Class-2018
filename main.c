//
//  main.c
//  Exercice 2 _ Série N°2 boucle Strutures alternatives repetitives
//
//  Created by Aymen charmi on 11/30/18.
//  Copyright © 2018 Aymen charmi. All rights reserved.
//

/* Exercice 2:
 ----------
 Calculez par multiplications successives X^N de deux entiers naturels X et N entrés au clavier.
 */

#include <stdio.h>
int main()
{
    int  X, N;   /* Les données */
    int  I;      /* Le compteur */
    double RESU; /* Type double à cause de la */
    /* grandeur du résultat.     */
    
    do
    {
        printf("Entrez l'entier naturel X : ");
        scanf("%d", &X);
    }
    while (X<0);
    do
    {
        printf("Entrez l'exposant       N : ");
        scanf("%d", &N);
    }
    while (N<0);
    
    /* Pour N=0, le résultat sera automatiquement X^0=1 */
    for (RESU=1.0, I=1 ; I<=N ; I++)
        RESU*=X;
    
    /* Attention: Pour X=0 et N=0 , 0^0 n'est pas défini */
    if (N==0 && X==0)
        printf("zéro exposant zéro n'est pas défini !\n");
    else
        printf("Résultat : %d ^ %d = %.0f\n", X, N, RESU);
    return 0;
}
