#include<stdio.h>
int main(){
    int n,i,p;
    p=0;
    printf("Enter a number=");//The no is prime or not//
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            p++;
        }
    }
        if(p==0)
        {
            printf("the number is prime");
        }
        else
        {
            printf("the number is not prime");
        }
    
    return 0;
}
