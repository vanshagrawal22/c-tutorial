/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    // 1 to n natural noexcept
    // int n ; 
    // printf("enter the no \n");
    // scanf("%d",&n);
    // for(int i=1; i<=n; i++){
    //     printf("%d",i);
    //     printf("\n");
    // }
    // // n to 1 natural no 
    //  int n ; 
    //  printf("enter the no\n");
    // scanf("%d",&n);
    // for(int i=n; i>=1; i--){
    //     printf("%d",i);
    //     printf("\n");
    // }
    // factorial
    
    // int n , t=1;
    // printf("enter the no\n");
    // scanf("%d",&n);
    // for (int i=1; i<=n;i++){
    //     int fact = i*t;
    //     t=fact;
    // }
    // printf("%d",t);
    
    // table 
    // int n; 
    // printf("enter the no \n");
    // scanf("%d",&n);
    // for(int i=1; i<=10 ; i++){
    //     printf("%d * %d = %d",n , i , n*i);
    //     printf("\n");
    // }
    
    // sum
    // int n , sum =0 ;
    // scanf("%d",&n);
    // for(int i=1; i<=n; i++){
    //     sum = sum + i;
        
    // }
    // printf("%d",sum);
    
    // palindrome
    // int n , r=0 , m;
    
    // scanf("%d",&n);
    // m=n;
    // for(int i=1;n!=0; i++){
    //     int rem = n%10;
    //     r = r*10 +rem;
    //     n= n/10;
    // }
    
    // if(m==r){
    //     printf("no is Palindrome");
    // }else{
    //     printf("no is not a palindrome");
    // }

// armstrong
    // int n , l , m , sum=0 ;
    
    // printf("enter the no \n");
    
    // scanf("%d",&n);
    // l=n;
    // m = log10(n) + 1;
    
    // // printf("%d\n",m);
    
    // for(int i=1; n!=0; i++){
    //     int r = n%10;
    //     sum = sum + pow(r,m); 
    //     n = n/10;
    // }
    // printf("%d",sum);
    
    // strong no
    // int n ,  sum=0;
    // printf("enter the no\n");
    // scanf("%d",&n);
    
    // int m = n;
    
    // while(n>0){
    //     int g = n %10;
        
    //     int t =1;
        
    //     for(int i=1; i<=g ; i++){
    //         t = t * i;
    //     }
    //     sum = sum + t;
        
    //     n/=10;
    // }
    // if(m==sum){
    //     printf("Strong no\n");
    // }else{
    //     printf("Not a strong no\n");
    // }
    

    // perfect no    
    
//     int n , sum =0; 
    
//     scanf("%d",&n);
    
//     int d = n;
    
//     for(int i =1; i<=n/2; i++){
//         if(n%i==0){
//             sum = sum + i;
            
//         }
//         else{
//             continue;
//  }
//     }
//      if(d==sum){
//         printf("Strong no");
//     }else{
//         printf("Not a strong  no ");
//     }
    
    // print the factor 
    int n ,g ; 
    scanf("%d",&n);      
    
    for(int i=1; i<=n/2; i++){
             if(n%i==0){
            printf("%d\n", i); //factors of the no 
         }else{
             continue;
         }
    }
    
   
    return 0;
}

