//
//  main.c
//  Exercice 2 _ Série N°1 Lecture et écriture de donnée
//
//  Created by Aymen charmi on 11/16/18.
//  Copyright © 2018 Aymen charmi. All rights reserved.
//


/*
 Exercice 2:
 ----------
 Ecrire un programme qui affiche le quotient et le reste de la division entière de deux nombres entiers entrés au clavier ainsi que le quotient rationnel de ces nombres.
 */

#include <stdio.h>
int main()
{
    /**Part 1 : initiatilazing variables*/
    int firstNumber, secondNumber, quotient, rest;
    float quotientRationnel;
    
    /**Part 2 : Lecture des données*/
    
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    
    printf("Enter second number: ");
    scanf("%d",&secondNumber);
    
    /**Part 3 : calculs*/
    
    // value of the quotient
    quotient = firstNumber / secondNumber;
    // value of the rest
    rest = firstNumber%secondNumber;
    // value of the quotient
    quotientRationnel = (float)firstNumber / (float)secondNumber;
    
    printf("le quotient de la division %d sur %d est : %d\n",firstNumber,secondNumber, quotient);
    printf("le reste de la division %d sur %d est : %d\n",firstNumber,secondNumber, rest);
    printf("le quotient rationnel de la division %.f sur %.f est : %.2f\n\n",(float)firstNumber,(float)secondNumber, quotientRationnel);
    return 0;
}

