#include<stdio.h>
int Total(char nm[],int m1,int m2,int m3);
int main(){
    char nm[20];
    int m1,m2,m3,k;
    printf("Enter the name =");
    gets(nm);
    printf("Enter value of m1=");
    scanf("%d",&m1);
    printf("Enter value of m2=");
    scanf("%d",&m2);
    printf("Enter value of m3=");
    scanf("%d",&m3);
    k=Total(nm,m1,m2,m3);
    printf("%d",k);
    return 0;
}
int Total(char nm[],int m1,int m2,int m3)
{
    int T;
    T=m1+m2+m3;
    return T;
}