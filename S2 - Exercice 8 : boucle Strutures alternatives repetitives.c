//
//  main.c
//  Exercice 8 _ Série N°2 boucle Strutures alternatives repetitives
//
//  Created by Aymen charmi on 11/30/18.
//  Copyright © 2018 Aymen charmi. All rights reserved.
//

/* Exercice 8:
 ----------
 Affichez un triangle isocèle formé d'étoiles de N lignes (N est fourni au clavier):
 */


#include <stdio.h>
int main()
{
    int row;   /* nombre de lignes        */
    int i;     /* compteur des lignes     */
    int space;   /* nombre d'espaces        */
    int j;     /* compteur des caractères */
    
    do
    {
        printf("Nombres de lignes : ");
        scanf("%d", &row);
    }
    while (row<1 || row>20);
    
    for (i=0 ; i<row ; i++)
    {
        space = row-i-1;
        for (j=0 ; j<space ; j++)
            putchar(' ');
        for (j=0 ; j<2*i+1  ; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}
