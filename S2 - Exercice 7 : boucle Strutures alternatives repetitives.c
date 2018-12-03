//
//  main.c
//  Exercice 7 _ Série N°2 boucle Strutures alternatives repetitives
//
//  Created by Aymen charmi on 11/30/18.
//  Copyright © 2018 Aymen charmi. All rights reserved.
//

/* Exercice 7:
 ----------
 Calculez pour une valeur X donnée du type float la valeur numérique d'un polynôme de
 degré n:
 P(X) = AnX^n + An-1X^n-1 + ... + A1X + A0
 Les valeurs de n, des coefficients An, ... , A0 et de X seront entrées au clavier.
 */

#include <stdio.h>
int main()
{
    int N;     /* degré du polynôme */
    float X;   /* argument          */
    float A;   /* coefficients successifs du polynôme */
    float P;   /* coefficient courant du terme Horner */
    
    printf("Entrer le degré  N du polynôme   : ");
    scanf("%d", &N);
    printf("Entrer la valeur X de l'argument : ");
    scanf("%f", &X);
    
    for(P=0.0 ; N>=0 ; N--)
    {
        printf("Entrer le coefficient A%d : ", N);
        scanf("%f", &A);
        P = P*X + A;
    }
    
    printf("Valeur du polynôme pour X = %.2f : %.2f\n", X, P);
    return 0;
}

