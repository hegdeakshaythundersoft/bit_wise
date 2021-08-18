/*3 Write a C program to get nth bit of a number.*/
#include <stdio.h>
#define b_AND &=
#define L_SHIFT <<
int EXTRACT(int,int);
int main()
{   
    int x=100,y=25,bitpos=5;
    /*printf("Enter the Two numbers\n");
    scanf("%d %d",&x,&y);
    printf("enter the position\n");
    scanf("%d",&bitpos);
    printf("The extracted bit from %dth position of %d is %d\n",bitpos,x,((1<<bitpos)&x)>>bitpos);
    printf("The extracted bit from %dth position of %d is %d\n",bitpos,y,((1<<bitpos)&y)>>bitpos);
    */
    printf("The extracted bit from %dth position of %d is %d\n",bitpos,x,EXTRACT(x,bitpos));
    printf("The extracted bit from %dth position of %d is %d\n",bitpos,y,EXTRACT(y,bitpos));
    
    return 0;
}
int EXTRACT(int b,int p){
    b b_AND 1 L_SHIFT p;/*b&=1<<p*/
    if(b)
    return 1;
    else
    return 0;
    
    
}

/* ex: 100 = 1100100 pos=5  
    hence 1<<5=0100000
    1100100
   &0100000
   =0100000
   but value is 32
   bit extraction,
   0100000>>5
   0000001=1
   */

