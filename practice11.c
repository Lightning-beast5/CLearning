#include<stdio.h>
int main(){
    int a[20],i;
    printf("enter any 10 elements");
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("reverse array of given elements");
    for(i=19;i>10;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
