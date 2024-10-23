#include<stdio.h>
int main(){
char nm[20];
int a;
printf("Enter name =");
scanf("%c",&nm);
printf("Enter age =");
scanf("%d",&a);
if(a>0 && a<10)
{
    printf("Child");
}
else if(a>=10 && a<=20)
{
    printf("Teen age");
}
else if(a>=21 && a<=40)
{
    printf("Young age");
}
else
{
    printf("Old age");
}
return 0;
}