#include<stdio.h>
int main(){
    char nm1[20],nm2[20],nm3[20];
    int i,j,k;
    printf("Enter the first name=");
    gets(nm1);
    printf("Enter the second name=");
    gets(nm2);
    for(i=0;nm1[i]!='\0';i++)
    {
        for(j=0;nm2[j]!='\0';j++)
        {
            for(k=0;nm3[k]!='\0';k++)
            {
                nm3[k]=nm1[i]+nm2[j];
                i++;
                j++;

            }


        }
    }    
    nm3[i]='\0';
    printf("concatenated name =%s",nm3);
    return 0;



}