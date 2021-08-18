/*2 Write a C program to check Most Significant Bit (MSB) of a number is set or not.*/
#include <stdio.h>
#define b_AND &=
#define L_SHIFT <<
int IFSET(int);
int main()
{   
    int x=100,y=-55;
    
     printf("x=%d's MSB is %s\n",x,IFSET(x)?"SET":"NOT-SET");/*only LSB is SET in 1=0X00000001*/
     printf("y=%d's MSB is %s\n",y,IFSET(y)?"SET":"NOT-SET");/*only LSB is SET in 1=0X00000001*/
    /*printf("x=%d's MSB is %s\n",x,(x&1<<31)?"SET":"NOT-SET");*//*only LSB is SET in 1=0X00000001*/
    /*printf("y=%d's MSB is %s\n",y,(y&1<<31)?"SET":"NOT-SET");*//*Bit-wise AND checks SET of LSB as other all bits are 0*/
    return 0;
}
int IFSET(int p){
    p b_AND 1 L_SHIFT 31;/*x bitwise & with 0001 where only LSB=1 others are 0*/ 
    if(p)
    return 1;
    else 
    return 0;
   
}
