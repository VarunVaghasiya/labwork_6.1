//write a program to print 1 to n using a while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int v;
int h = 1;
clrscr();
printf("Enter any number :");
scanf("%d",&v);
while(h<=v){
printf("%d\n",h);
h++;
}

getch();
}

