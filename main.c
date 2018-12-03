//
//  main.c
//  Série N°1 Lecture et écriture de donnée
//
//  Created by Aymen charmi on 11/16/18.
//  Copyright © 2018 Aymen charmi. All rights reserved.
//

/* Exercice 1:
 ----------
 Ecrire un programme qui permute et affiche les valeurs de trois variables A, B, C de type entier qui sont entrées au clavier :
 A ==> B , B ==> C , C ==> A */

#include <stdio.h>
int main()
{
    int firstNumber;
    int secondNumber;
    int thirdNumber;
    int temporaryVariable;
    
    /**Part 1 : Lecture des données*/
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    
    printf("Enter second number: ");
    scanf("%d",&secondNumber);
    
    printf("Enter third number: ");
    scanf("%d",&thirdNumber);
    
    /**Part 2: traitement : peremutation*/
    
    // Value of firstNumber is assigned to temporaryVariable
    temporaryVariable = firstNumber;
    
    // Value of secondNumber is assigned to thirdNumber
    firstNumber = thirdNumber;
    
    // Value of secondNumber (which contains the initial value of firstNumber) is assigned to thirdNumber
    thirdNumber = secondNumber;
    
    // Value of temporaryVariable (which contains the initial value of firstNumber) is assigned to secondNumber
    secondNumber = temporaryVariable;
    
    
    /**Part 3: Affichage*/
    
    printf("\nAfter swapping, firstNumber = %d\n", firstNumber);
    printf("After swapping, secondNumber = %d\n", secondNumber);
    printf("After swapping, thirdNumber = %d\n\n", thirdNumber);
    
    return 0;
}


