//
//  main.c
//  Exercice 4 _ Série N°1 Lecture et écriture de donnée
//
//  Created by Aymen charmi on 11/16/18.
//  Copyright © 2018 Aymen charmi. All rights reserved.
//
/* Exercice 4
   ----------
Ecrire un programme qui calcule et affiche l'aire d'un triangle dont il faut entrer les longueurs des trois côtés. Utilisez la formule :
S^2= P(P-A)(P-B)(P-C)
où A, B, C sont les longueurs des trois côtés (type int) et P le demi-périmètre du triangle.
 */

#include <stdio.h>
#include <math.h>
int main()
{
    
    int firstNumber, secondNumber, thirdNumber;
    double P;
    float surfaceWithoutSquareRoot;
    float surface;
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    
    printf("Enter second number: ");
    scanf("%d",&secondNumber);
    
    printf("Enter second number: ");
    scanf("%d",&thirdNumber);
    
    /* En forçant la conversion de A, les autres opérandes */
    /* sont converties automatiquement. */
    P=((double)firstNumber+secondNumber+thirdNumber)/2;
    surfaceWithoutSquareRoot = (P*(P-firstNumber)*(P-secondNumber)*(P-thirdNumber));
    surface = sqrt(surfaceWithoutSquareRoot);
    printf("Surface du triangle S = %.f\n",surface);
    return 0;
}

