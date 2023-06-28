//write a program to print n to 1 using a while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int a;
int y = 1;
clrscr();
printf("Enter any number :");
scanf("%d",&a);

while(a>=y){
printf("%d\n",a);
a--;
}

getch();
}