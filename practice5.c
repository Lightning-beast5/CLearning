#include<stdio.h>
int main(){
    int i,m;
    i=5;
    m=1;
    while(i>0)
    {
        m=m*i;
        i=i-1;
    }
    printf("%d",m);
    return 0;
}