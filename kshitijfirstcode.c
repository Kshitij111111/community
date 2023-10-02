#include<stdio.h>
void main()
{int a,b,c;
printf("enter three numbers:\n");
printf("enter a :%d\n");
scanf("%d",&a);
printf("enter b :%d\n");
scanf("%d",&b);
printf("enter c :%d\n");
scanf("%d",&c);
if (a<b)
   if (b<c){
   printf("c is greatest\n");}
   else {
   printf("b is greatest\n");}
else{
printf("a is greatest\n");}
}