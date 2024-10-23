#include<stdio.h>
int main(){
    int a,b;
    FILE *p,*fopen();
    p=fopen("NO.dat","w");
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
    fprintf(p,"%d%d",a,b);
    fclose(p);
    p=fopen("NO.dat","r");
    fscanf(p,"%d%d",&a,&b);


    if(a>b)
    {
        printf("a is greater then b");
    }
    else
    {
        printf("b is greater then a");
    }
    fclose(p);
    p=fopen("NO.dat","a");
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
    fprintf(p,"%d%d",a,b);
    fclose(p);
    

    return 0;
}