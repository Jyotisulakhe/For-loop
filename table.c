
#include<stdio.h>
//tables
int main()
{
int n,mul;
printf("enter which table you learn");
scanf("%d",&n);

for(int i=1;i<=10;i++){
   mul=n*i;

    printf("table is %d\n",mul);}
return 0;
}
