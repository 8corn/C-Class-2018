//
//  main.c
//  Exercice 6 _ Série N°2 boucle Strutures alternatives repetitives
//
//  Created by Aymen charmi on 11/30/18.
//  Copyright © 2018 Aymen charmi. All rights reserved.
//

/* Exercice 6:
 ----------
 
 Calculez le nombre lu à rebours d'un nombre positif entré au clavier en supposant que le
 fichier d'entrée standard contient le nombre à inverser.
 Exemple: Entrée: 1234 Affichage: 4321
 */

#include <stdio.h>
int main()
{
    int  NOMB = 0;   /* Le nombre à inverser */
    int  NINV;   /* Le nombre inversé    */
    /* Attention: en utilisant le type int, il est impossible */
    /* d'inverser correctement des nombres comme 10033 ...    */
    do
    {
        printf("Entrez un nombre positif (<10000) : ");
        scanf("%d", &NOMB);
    }
    while (NOMB<0 || NOMB>9999);
    
    NINV=0;
    while(NOMB>0)
    {
        NINV *= 10;
        NINV += NOMB%10;
        NOMB /= 10;
    }
    
    /* Autre possibilité : */
    /* for (NINV=0 ; NOMB>0 ; NOMB/=10)
     NINV = NINV*10 + NOMB%10;
     */
    
    printf("Le nombre 'inversé' est : %d\n", NINV);
    return 0;
}
