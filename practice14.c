#include<stdio.h>
int main(){
    int a[100],i,p,n;
    printf("Enter the number of elements in a array");
    scanf("%d",&n);
    printf("Enter the elements in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position to be deleted=");
    scanf("%d",&p);
    if (p>=n+1)
    {
        printf("cann't be deleted");
    }
    else
    {
        for(i=p-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        printf("After deletion=");
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
    }    
        return 0;

}

