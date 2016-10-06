//
//  main.c
//  Dekadikos_Se_Binary
//
//  Created by giorgos andreou on 8/11/15.
//  Copyright © 2015 giorgos andreou. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>
#include <math.h>


int main() {
    
    
    int  k,c,n;
    
    printf("Dose ton akeraio thetiko arithmo gia na metatrapei se Duadiko:\n");
    printf(">");
    scanf("%d",&n);
    
    int b=n ;
    int count=0 ;
    
    while (b!=0){
        b=b/2 ;
        count+=1 ;
    }
    
    printf("O Duadikos tou %d einai: ",n);
    
    for (c = count-1; c >= 0; c--){
        k = n >> c;
        
        if (k & 1)
            printf("1");
        else
            printf("0");
    }
    
    printf("\n");
    
    
    
    
}

