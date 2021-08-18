/*5 Write a C program to clear nth bit of a number.*/

#include <stdio.h>
#include <stdio.h>
#define b_AND &=
#define L_SHIFT <<
int CLR_B(int,int);
int main()
{   
    int x=100,y=25,bitpos=5;
    /*printf("Enter the Two numbers\n");
    scanf("%d %d",&x,&y);
    printf("enter the position\n");
    scanf("%d",&bitpos);
    printf("After CLR bit of %dth position of %d = %d\n",bitpos,x,(~(1<<bitpos)&x));
    printf("After CLR bit of %dth position of %d = %d\n",bitpos,y,(~(1<<bitpos)&y));*/
    printf("After CLR bit of %dth position of %d = %d\n",bitpos,x,CLR_B(x,bitpos));
    printf("After CLR bit of %dth position of %d = %d\n",bitpos,y,CLR_B(y,bitpos));
    return 0;
}
int CLR_B(int b,int p){
    b b_AND ~(1 L_SHIFT p);/*b&=~(1<<p)*/
    return b;
}
/*  100=110100       
  1<<5=010000
  ~   =011111
     &=010100
      =64+4=68 */
