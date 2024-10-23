#include<stdio.h>
int main(){
    char nm[20];
    float M1,M2,M3,T,P;
    printf("Enter your name =");
    gets(nm);
    printf("Enter marks for M1 =");
    scanf("%f",&M1);
    printf("Enter marks for M2 =");
    scanf("%f",&M2);
    printf("Enter marks for M3 =");
    scanf("%f",&M3);
    T=M1+M2+M3;
    P=T/300*100;
    printf("Total=%f,Percentage=%f",T,P);


    return 0;
}