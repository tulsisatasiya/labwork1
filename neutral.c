#include<stdio.h>  
int main()   
{ 
    float a;
    
    printf("Enter value you are willing to check:");
    scanf("%f",&a);
    
    if(a>0){
        printf("Value is not neutral, it's a positive value.");
    }
    else if(a<0){
        printf("Value is not neutral, it's a negative value.");
    }
    else{
        printf("Value is neutral.");
    }
    return (0);  
} 
