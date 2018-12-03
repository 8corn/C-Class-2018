//
//  main.c
//  Exercice 1 _ Série N°2 boucle Strutures alternatives repetitives
//
//  Created by Aymen charmi on 11/30/18.
//  Copyright © 2018 Aymen charmi. All rights reserved.
//

/* Exercice 1:
 ----------
 Ecrivez un programme qui lit N nombres entiers au clavier et qui affiche leur somme, leur produit et leur moyenne. Choisissez un type approprié pour les valeurs à afficher. Le nombre N est à entrer au clavier. Résolvez ce problème,
 a) en utilisant while,
 b) en utilisant do - while,
 c) en utilisant for.
 d) Laquelle des trois variantes est la plus naturelle pour ce problème?
 */

#include <stdio.h>
int main()
{
    int nbDonnées;       /* nombre de données */
    int NOMB;    /* nombre courant    */
    int I;       /* compteur */
    long SOM;    /* la somme   des nombres entrés */
    double PROD; /* le produit des nombres entrés */
    
    printf("Nombre de données : ");
    scanf("%d", &nbDonnées);
    
    SOM=0;
    PROD=1;
    I=1;
    while(I<=nbDonnées)
    {
        printf("%d. nombre : ", I);
        scanf("%d", &NOMB);
        SOM  += NOMB;
        PROD *= NOMB;
        I++;
    }
    
    printf("La somme   des %d nombres est %ld \n", nbDonnées, SOM);
    printf("Le produit des %d nombres est %.f\n", nbDonnées, PROD);
    printf("La moyenne des %d nombres est %.f\n", nbDonnées, (float)SOM/nbDonnées);
    return 0;
}

/*
b) DO WHILE
-----------
SOM=0;
PROD=1;
I=1;
do
{
    printf("%d. nombre : ", I);
    scanf("%d", &NOMB);
    SOM  += NOMB;
    PROD *= NOMB;
    I++;
}
while(I<=N);
*/


/*
c) FOR
------
Remplacez le bloc de traitement (en gras) de (a) par :

for (SOM=0, PROD=1, I=1 ; I<=N ; I++)
{
    printf("%d. nombre : ", I);
    scanf("%d", &NOMB);
    SOM  += NOMB;
    PROD *= NOMB;
    }
*/

/*
d) FOR
------
la variante la plus naturelle pour ce problème est le c -> boucle FOR
*/
