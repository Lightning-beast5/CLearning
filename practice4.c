#include<stdio.h>
int main(){
    int nm,i,p;
    printf("enter a number =");
    scanf("%d",&nm);
    for(i=1;i<=10;i=i+1)
    {
        p=nm*i;
        printf("%d*%d=%d\n",nm,i,p);
    }
    return 0;

}