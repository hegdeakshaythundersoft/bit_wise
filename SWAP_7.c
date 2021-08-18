/*7 Write a C program to swap two numbers using bitwise operator.*/
#include <stdio.h>
#define b_XOR ^
void XCH(int*,int*);
int main()
{   
    int x=100,y=25,bitpos=5;
    /*printf("Enter the Two numbers\n");
    scanf("%d %d",&x,&y);
    printf("enter the position\n");
    scanf("%d",&bitpos);*/
    printf("Before exchange x =  %d  y =  %d\n",x,y);
    XCH(&x,&y);
    printf("Before exchange x =  %d  y =  %d\n",x,y);
     
    return 0;
}
void XCH(int *p,int *q){
    *p=*p^*q;
    *q=*p^*q;
    *p=*p^*q;
    return;
}
/*1100100=x=25
^ 0011001=y=100
= 1111101=x
^ 0011001
= 1100100=y=100
^ 1111101
= 0011001=x=25*/

