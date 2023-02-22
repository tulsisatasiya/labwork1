#include<stdio.h>  

int main()   
{ 
    float a,b;
    
    printf("Enter first value:");
    scanf("%f",&a);
    

    printf("Enter second value:");
    scanf("%f",&b);
    
    if(a>b){
    printf("Value %f is smaller than %f",b,a);        
    }
    
    else{
    printf("Value %f is smaller than %f",a,b);            
    }
    
    return (0);  
} 
