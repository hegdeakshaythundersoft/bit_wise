/*4 Write a C program to set nth bit of a number.*/
#include <stdio.h>
#define b_OR |=
#define L_SHIFT <<
int SET_B(int,int);
int main()
{   
    int x=100,y=25,bitpos=5;
    /*printf("Enter the Two numbers\n");
    scanf("%d %d",&x,&y);
    printf("enter the position\n");
    scanf("%d",&bitpos);
    printf("After SET bit of %dth position of %d = %d\n",bitpos,x,((1<<bitpos)|x));
    printf("After SET bit of %dth position of %d = %d\n",bitpos,y,((1<<bitpos)|y));*/
     printf("After SET bit of %dth position of %d = %d\n",bitpos,x,SET_B(x,bitpos));
    printf("After SET bit of %dth position of %d = %d\n",bitpos,y,SET_B(y,bitpos));
    return 0;
}
int SET_B(int b,int p){
    b b_OR 1 L_SHIFT p;/*b|=1<<p*/
    return b;
}
/*  25=011001
  1<<5=100000
     |=111001
      =32+16+8+1=57 */

