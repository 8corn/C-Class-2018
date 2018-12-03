//
//  main.c
//  Exercice 7 _ Série N°1 Lecture et écriture de donnée
//
//  Created by Aymen charmi on 11/16/18.
//  Copyright © 2018 Aymen charmi. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int XA, YA, XB, YB;
    double distance;
    printf("Enter A's coordinates (don't forget to separate the cordinates by a comma(format XA,YA)) : ");
    scanf("%d,%d", &XA, &YA);
    printf("Enter B's coordinates (don't forget to separate the cordinates by a comma(format XB,YB)) : ");
    scanf("%d,%d", &XB, &YB);
    distance=sqrt(pow(XA-XB,2)+pow(YA-YB,2));
    printf("The distance between the point A(%d,% d) and the point B(%d, %d) is %.2f\n",
           XA, YA, XB, YB, distance);
    return 0;
}
