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
    printf("FOR\n");
    int many[] = { 2, 4, 8};
    int sum = 0;
    for (int i=0; i < 3; i++) {
        sum += many[i];
        printf("i %d sum %d\n", i, sum);
    }
    printf("WHILE\n");
    char letters[]= {'a','b','c'};
    int w = 0;
    while (w < 3) {
        printf("letter %d is %c \n" ,w, letters[w]);
        w++;
    }
    
    printf("DO WHILE\n");
    w =0;
    do{
        printf("letter %d is %c \n",w,letters[w]);
        w++;
    }while (w < 3);
    return 0;
}

