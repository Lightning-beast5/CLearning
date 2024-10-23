#include<stdio.h>
int main(){
    char nm[20],p[20];
    int i;
    printf("Enter the name =");
    gets(nm);
    for(i=0;nm[i]!='\0';i++)
    {
        p[i]=nm[i];
    }    
    p[i]='\0';
    printf("copied name=%s",p);
    return 0;



    

}