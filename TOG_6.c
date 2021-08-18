/*6 Write a C program to toggle nth bit of a number.*/

#include <stdio.h>
#include <stdio.h>
#define b_AND &=
#define b_OR |=
#define L_SHIFT <<
int TOG_B(int,int);
void delay();
int main()
{   
    int x=100,y=25,bitpos=5;
    /*printf("Enter the Two numbers\n");
    scanf("%d %d",&x,&y);
    printf("enter the position\n");
    scanf("%d",&bitpos);
    printf("After CLR bit of %dth position of %d = %d\n",bitpos,x,(~(1<<bitpos)&x));
    printf("After CLR bit of %dth position of %d = %d\n",bitpos,y,(~(1<<bitpos)&y));*/
    printf("After CLR bit of %dth position of %d = %d\n",bitpos,x,TOG_B(x,bitpos));
   // printf("After CLR bit of %dth position of %d = %d\n",bitpos,y,TOG_B(y,bitpos));
    return 0;
}
int TOG_B(int b,int p){
    b b_AND ~(1 L_SHIFT p);/*b&=~(1<<p)*/
    delay();
    printf("%d\n",b);
    b b_OR 1 L_SHIFT p;/*b|=1<<p*/
    printf("%d\n",b);
    delay();
    TOG_B(b,p);
    return b;
}
void delay(){
    for(int i=0;i<2000;i++)
    
    return;
}
/*  100=110100       
  1<<5=010000
  ~   =011111
     &=010100
      =64+4=68 */
      
      /* 100=110100   
  1<<5=100000
     |=110100
      =64+32+4=100 */

