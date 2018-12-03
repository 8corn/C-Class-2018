//
//  main.c
//  Exercice 5 _ Série N°1 Lecture et écriture de donnée
//
//  Created by Aymen charmi on 11/16/18.
//  Copyright © 2018 Aymen charmi. All rights reserved.
//

/* Exercice 5:
   -----------
Ecrire un programme qui calcule la somme de quatre nombres du type int entrés au clavier, a) en se servant de 5 variables (mémorisation des valeurs entrées)
b) en se servant de 2 variables (perte des valeurs entrées)
 */

#include <stdio.h>
int main()
{
    /**Part 1 : initializing values*/
    int  number;
    double sum;
    // We initiate the sum equals to 0
    sum = 0;
    
    /**Part 2 : Lecture des données*/
    // at every entry we add the value we added to the previous one (here 0 + number added)
    printf("Enter first number: ");
    scanf("%d", &number);
    sum+=number;
    printf("Enter second number: ");
    scanf("%d", &number);
    sum+=number;
    printf("Enter third number: ");
    scanf("%d", &number);
    sum+=number;
    printf("Enter fourth number: ");
    scanf("%d", &number);
    sum+=number;
    printf("The total addition equals %.1f\n", sum);
    
    return 0;
}
