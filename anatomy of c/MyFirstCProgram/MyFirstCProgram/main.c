//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>
int main()
{
    //Variables Basicas
    int days_in_a_week = 7;
    float cm_to_in = 2.54;
    char the_w;
    the_w = 'w';
    //printf("%d days in a week. \n", days_in_a_week);
    //printf("%f cm per in. \n", cm_to_in);
    //printf("%c is a  cool hotel \n",the_w);

    //Arrays
    float numbers_geeks_love[3];
    numbers_geeks_love[0] = 3.1415;
    numbers_geeks_love[1] = 1.1623;
    numbers_geeks_love[2] = 2.2331;
    //printf("N1: %f, N2: %f, N3: %f \n", numbers_geeks_love[0], numbers_geeks_love[1], numbers_geeks_love[2]);

    int primes[] = {2,3,5,7};
    //printf("the first 4 prime numbers %d %d %d %d \n",primes[0], primes[1],primes[2],primes[3]);

    //Operators and expressions
    int a = 9;
    printf("a = %d \n", a);
    int c = a++;
    printf("c = %d, a= %d \n",c,a);
    int d = a--;
    printf("d = %d, a= %d \n",d,a);

    int b = a % 4;
    printf("d = %d, a= %d \n",b,a);
    
    float fa = 5.0 / .5;
    printf("fa %f \n",fa);
    
    fa *= 10;
    printf("fa = %f \n", fa);

    return 0;

}

