/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    // program to calculate the compound interest 
    
    int p ,  n ;
    
    float r;
    
    printf("enter the principal value : \n");
    scanf("%d" , &p);
    
    printf("enter the  rate of interest : \n");
    scanf("%f" , &r);
    
    printf("enter the time period : \n");
    scanf("%d" , &n);
    
 
    float m = pow((1 + r/100) , n);
    
    float c_i = p*m - p;
    
    printf("compound interest is : %f ", c_i);

    return 0;
}

