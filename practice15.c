#include<stdio.h>
int main(){
    int a[60][60],b[60][60],s[60][60],c,r,i,j;
    printf("Enter the no of rows =");
    scanf("%d",&r);
    printf("Enter the no of columns=");
    scanf("%d",&c);
    printf("Enter the elements for matrix a=");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements for matrix b=");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\n sum of two matrices=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",s[i][j]);
        }
        printf("\n");
    }
    

    
    return 0;
}