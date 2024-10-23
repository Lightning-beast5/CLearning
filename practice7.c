#include<stdio.h>
int main(){
    int n,a,b,c,i;
    a=0;
    b=1;
    printf("Enter the number limit =");
    scanf("%d",&n);
    printf("\n%d%d",a,b);
    i=1;
    while(i<=n)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;    
        i++;
    }
    return 0;
}