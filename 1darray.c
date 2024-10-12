#include<stdio.h>
int main (){
    int i;
    float marks [3];
    float sum = 0;
    for(i=0;i<3;i++)
    {
        printf("enter the marks of subject\n");
        scanf("%f",&marks[i]);
    }
    for(i=0;i<3;i++)
   { sum = sum + marks[i];
    }
    printf("sum of marks : %f\n",sum);
    float per;
    per = sum/3;
    printf(" percentage of marks : %f\n",per);


    return 0;

}