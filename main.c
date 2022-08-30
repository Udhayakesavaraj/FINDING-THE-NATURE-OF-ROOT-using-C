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
int a,b,c,disc;
float d,root1,root2;
printf("Enter the coefficient of a then b then c:\n");
scanf("%d %d %d",&a,&b,&c);
d=sqrt(disc);
if(disc>0)
 {
  printf("Roots are real\n");
  root1=(-b+d)/(2*a);
  root2=(-b-d)/(2*a);
  printf("the roots are %f %f\n",root1,root2);
 }
 else   
    if(disc==0)
     {
         printf("roots are equal\n");
         root1=-b/2*a;
         printf("the root is %f\n",root1);
     }
     else
     {
         printf("Imaginary roots\n");
         root2=(-b-d)/(2*a);
         printf("the root is %f",root2);
     }
     
}
    
    
    
    
 

