//write a program to print 1 to n using a do while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int v;
int z = 1;
clrscr();
printf("Enter any number :");
scanf("%d",&v);
do{
printf("%d\n",z);
z++;
}while(z<=v);

getch();
}