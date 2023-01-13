/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//   max betwween two no
    // int a , b , max;
    // scanf("%d%d",&a,&b);
    // max=a>b?a:b;
    // printf("%d",max);
    
    // even or odd
    // int n ;
    // scanf("%d",&n);
    // n%2==0?printf("%d is even",n):printf("%d is odd",n);
    
    // char is alphabet
//     char c;
//     scanf("%c",&c);
//   ( c>=65&&c<=90)||(c>=97&&c<=122)?printf("%c is a character",c):printf("%c is not a character",c);

    // divisible by 5 or not
    int n;
    scanf("%d",&n);
    if(n%5==0&&n%11==0){
        printf("%d is divisible by 5 & 11",n);
    }else{
        printf("not divisible");
    }
    return 0;
}

