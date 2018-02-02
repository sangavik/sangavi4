#include<stdio.h>
int main()
{
int a=10,b=20;
clrscr();
printf("\n before swapping a=%d,b=%d");
swap(a,b);
{
a=a+b;
b=a-b;
a=a-b;
}
printf("\n after swapping");
return 0;
}
