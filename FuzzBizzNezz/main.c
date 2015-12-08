//
//  main.c
//  FuzzBizzNezz
//
//  Created by Carl Nate Udren on 12/7/15.
//  Copyright © 2015 Carl Nate Udren. All rights reserved.
//

#include <stdio.h>

int main()
{
    int nezz, fuzz, bizz; //initializes variables for user input.
    printf("Enter a number value for Nezz\n");
    scanf("%d", &nezz); //assumes user enters an interger.  No input verification.
    printf("Enter a number value for Bizz\n");
    scanf("%d", &bizz); // assumes user enters an interger.  No input verification.
    printf("Enter a number value for Fuzz\n");
    scanf("%d", &fuzz); //assumes user enters an interger.  No input verification.
    
    
    int x = 0; //initializes counter used in for loop.
    for (x = 1; x <= nezz; x++)
    {
        
        if (x % fuzz != 0 && x % bizz != 0)
        {
            printf("%d", x);
        }
        
        if (x % fuzz == 0)
        {
            printf("Fuzz");
        }
        
        if (x % bizz == 0)
        {
            printf("Bizz");
        }
        
        printf("\n");
    }
    return 0;
}
