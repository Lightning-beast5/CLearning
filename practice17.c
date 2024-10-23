#include<stdio.h>
int main(){
    int r,c,i,l,j,a[20][20],b[20][20],p[20][20];
    printf("Enter the order of the matrix A=");
    scanf("%d*%d",&r,&c);
    printf("Enter the elements for matrix A=");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the order of the matrix B=");
    scanf("%d*%d",&c,&l);
    printf("Enter the elements for matrix B=");
    for(i=0;i<c;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<l;j++)
        {
            {
            p[i][j]=a[i][j]*b[i][j];
            }
        }
    }    
    printf("\nEnter the product of two matrices=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d",p[i][j]);
        }
        printf("\n");
    }
    return 0;

}