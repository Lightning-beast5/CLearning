#include<stdio.h>
void Table(struct Tb x);
struct Tb
{
    int nm;
};
int main()
{
    struct Tb x;
    printf("Enter the number =");
    scanf("%d",&x.nm);
    Table(x);
    return 0;


}
void Table(struct Tb x)
{
    int p,i;
    for(i=1;i<=10;i++)
    {
        p=x.nm*i;
        printf("%d*%d=%d\n",x.nm,i,p);
    }    
}