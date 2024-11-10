#include<stdio.h>
int main(){
    int n=6;
    int array[6] = {9,7,8,1,2,8};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]==array[j])
            printf("%d is duplicate in this array\n",array[i]);
        }
    }
    return 0;
}