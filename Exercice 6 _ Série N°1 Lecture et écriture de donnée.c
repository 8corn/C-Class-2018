//
//  main.c
//  Exercice 6 _ Série N°1 Lecture et écriture de donnée
//
//  Created by Aymen charmi on 11/16/18.
//  Copyright © 2018 Aymen charmi. All rights reserved.
//

#include <stdio.h>

int main()
{
    int  taxe;
    double netPrice, articlesprice;
    printf("Enter the price of the article in TTC : ");
    scanf("%lf", &articlesprice);
    printf("Enter the taxe percentage: ");
    scanf("%d", &taxe);
    netPrice = articlesprice*100/(100+taxe);
    printf("The net price of the article is %.2lf\n", netPrice);
    return 0;
}
