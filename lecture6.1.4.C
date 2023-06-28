//write a progeam to print odd numbers from n to 1 using a while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int x,y;
clrscr();
x = 1;
printf("Enter any number :");
scanf("%d",&y);
printf("odd number between %d and 1 are \n",y);
while(x>=y){
printf("%d",x);
x--;
x%2 !=0;
}
printf("1,3,5,7,9");
getch();
}