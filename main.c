//
//  main.c
//  Exercice 3 _ Série N°1 Lecture et écriture de donnée
//
//  Created by Aymen charmi on 11/16/18.
//  Copyright © 2018 Aymen charmi. All rights reserved.
//



/* Exercice 3:
   ----------
 Ecrire un programme qui affiche la résistance équivalente à trois résistances R1, R2, R3 (type double),
- si les résistances sont branchées en série: Rsér = R1+R2+R3
- si les résistances sont branchées en parallèle: Rpar = R1R2R3/R1R2+R1R3+R2R3  */


#include <stdio.h>
int main()
{
     /**Part 1 : initializing values*/
    int firstResistance;
    int secondResistance;;
    int thirdResistance;
    float resistanceSerie;
    float resistanceParallele;
    
    /**Part 2 : Lecture des données*/
    printf("Enter the value of the first resistance: ");
    scanf("%d", &firstResistance);
    
    printf("Enter the value of the second resistance: ");
    scanf("%d",&secondResistance);
    
    printf("Enter the value of the third resistance: ");
    scanf("%d",&thirdResistance);
    
    /**Part 3: calc*/
    // Value of resistance en serie
    resistanceSerie = firstResistance+secondResistance+thirdResistance;
    // Value of resistance parallele
    resistanceParallele = (firstResistance*secondResistance*thirdResistance)/(firstResistance*secondResistance+firstResistance*thirdResistance+secondResistance*thirdResistance);
    
    /**Part 4: Affichage*/
    printf("the sum of serial resistance : %.1f\n",resistanceSerie);
    printf("the sum of resistance in parallel: %.1f\n",resistanceParallele);
    return 0;
}

