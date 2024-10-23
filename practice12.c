#include<stdio.h>
int main(){
    int a[100],i,n,f,p;
    p=0;
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter elements in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be found");
    scanf("%d",&f);
    for(i=0;i<n;i++)
    {
        if(a[i]==f)
        {
            p++;
        }
    }
        if(p==1)
        {
            printf("element found");
        }  
        else
        {
            printf("element not found");
        }
        
    return 0;

}