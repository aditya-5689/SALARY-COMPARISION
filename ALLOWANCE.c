#include <stdio.h>
#include <math.h>
int main()
{
    //PROGRAM TO FIND TOTAL SALARY OF PERSON WITH ALL THE ALLOWANCES AND INCREMENT YEAR WISE

    //TAKING INPUT FROM THE USER FOR HIS SALARY

    float a_2024,b_2024,a_new,b_new;
    float bp_a24,hra_a,da_a,ta_a;
    float bp_b24,hra_b,da_b,ta_b;
    printf("ENTER BASIC PAY OF A : ");
    scanf("%f",&bp_a24);
    printf("ENTER BASIC PAY OF B : ");
    scanf("%f",&bp_b24);
    printf("ENTER HRA OF A : ");
    scanf("%f",&hra_a);
    printf("ENTER HRA OF B : ");
    scanf("%f",&hra_b);
    printf("ENTER DA OF A : ");
    scanf("%f",&da_a);
    printf("ENTER DA OF B : ");
    scanf("%f",&da_b);
    printf("ENTER TA OF A : ");
    scanf("%f",&ta_a);
    printf("ENTER TA OF B : ");
    scanf("%f",&ta_b);

    //CALCULATING USER SALARY IN THE PRESENT YEAR

    a_2024=(bp_a24)+(bp_a24*hra_a/100)+(bp_a24*da_a/100)+(ta_a);
    b_2024=(bp_b24)+(bp_b24*hra_b/100)+(bp_b24*da_b/100)+(ta_b);
    
    //COMPARING TWO PERSONS SALARY 

    if(a_2024 > b_2024)
    {
        printf("A HAS HIGHER SALARY THAN B IN 2024\n");
    }
    else
    {
        printf("B HAS HIGHER SALARY THAN A IN 2024\n");
    }

    //PRINTING BOTH PERSONS SALARY

    printf("A SALARY IN 2024 IS %f\n",a_2024);
    printf("B SALARY IN 2024 IS %f\n",b_2024);

    //TAKING INPUT AS RATE OF INCREMENT IN CI FROM USER

    float r_a,r_b;
    printf("ENTER RATE OF INCREMENT OF A : ");
    scanf("%f",&r_a);
    printf("ENTER RATE OF INCREMENT OF B : ");
    scanf("%f",&r_b);
    
    float a,b;
    float t;
    printf("ENTER YEARS OF INCREMENT : ");
    scanf("%f",&t);
    a= bp_a24*pow(1+r_a/100,t);
    b= bp_b24*pow(1+r_b/100,t);

    //CALCULATING NEW SALARY AFTER T YEARS

    a_new=(a)+(a*hra_a/100)+(a*da_a/100)+(ta_a);
    b_new=(b)+(b*hra_b/100)+(b*da_b/100)+(ta_b);

    //COMPARING NEW SALARY OF BOTH PERSONS

    if(a_new > b_new)
    {
        printf("A HAS HIGHER SALARY THAN B AFTER %f YEARS\n",t);
    }
    else
    {
        printf("B HAS HIGHER SALARY THAN A AFTER %f YEARS\n",t);
    }

    //DISPLAY OF BOTH PERSONS SALARY AFTER T YEARS

    printf("A SALARY IN %.0f IS %f\n",2024+t,a_new);
    printf("B SALARY IN %.0f IS %f\n",2024+t,b_new);
    
    return 0;
}