#include<stdio.h>
int main()
{
int num;
printf("ENTER THE VALUE OF NUM");
scanf("%d",&num);
if (num<0)
printf("ENTERD NUMBER IS NEGATIVE");
else if(num>0)
printf("ENTERED NUMBER IS POSITIVE");
else 
printf("ENTERED NUMBER IS ZERO");
return 0;
}
