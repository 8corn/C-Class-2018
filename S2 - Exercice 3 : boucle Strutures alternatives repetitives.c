//
//  main.c
//  Exercice 3 _ Série N°2 boucle Strutures alternatives repetitives
//
//  Created by Aymen charmi on 11/30/18.
//  Copyright © 2018 Aymen charmi. All rights reserved.
//

/* Exercice 3:
 ----------
 Calculez la somme des N premiers termes de la série harmonique, N est un paramètre donné par l’utilisateur à l’entrée.
 1 + 1/2 + 1/3 + ... + 1/N
 */

#include <stdio.h>
int main()
{
    int N;     /* nombre de termes à calculer */
    int I;     /* compteur pour la boucle */
    float SOM; /* Type float à cause de la précision du résultat.   */
    do
    {
        printf ("Nombre de termes: ");
        scanf ("%d", &N);
    }
    while (N<1);
    for (SOM=0.0, I=1 ; I<=N ; I++)
        SOM += (float)1/I;
    printf("La somme des %d premiers termes est %.2f \n", N, SOM);
    return 0;
}
