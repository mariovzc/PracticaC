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
    int n1 = 11,n2 = 9,minimun;
    char min_value;
    if (n1 < n2) {
        minimun = n1;
        min_value = 'Na';
    }else{
        minimun = n2;
        min_value = 'Nb';
    }
    printf("%c %d is the mininum \n",min_value,minimun);
    
    char  a= 'a', b = 'b', g ='g';
    
    char letter = 'z';
    
    if (letter == a) printf("letter %c is %c \n", letter,a);
    else if (letter == b) printf("letter %c is %c \n", letter,b);
    else if (letter == g) printf("letter %c is %c \n", letter,g);
    else printf("letter not found %c \n", letter);
    
    switch (letter) {
        case 'a':
            printf("letter %c is %c", letter,a);
            break;
        case 'b':
            printf("letter %c is %c", letter,b);
            break;
        case 'g':
            printf("letter %c is %c", letter,g);
            break;
            
        default:
            printf("letter not found %c  \n", letter);
            break;
    }
    
    return 0;
}

