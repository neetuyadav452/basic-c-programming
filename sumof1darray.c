#include<stdio.h>
int main(){
    int a1[3];
    int a2[3];
    int sum [3];
    int i;
    for(i=0;i<3;i++){
        printf("enter elements of first array\n");
        scanf("%d",&a1[i]);
    }
    for(i=0;i<3;i++){
        printf("enter elements of second array\n");
        scanf("%d",&a2[i]);
    }
    for(i=0;i<3;i++){
        sum[i] = a1[i] + a2[i];}
         for(i=0;i<3;i++){
    printf("sum of two element of index value [%d] : %d\n",i,sum[i]);}
    return 0;
}