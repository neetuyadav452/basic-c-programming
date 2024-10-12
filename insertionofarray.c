#include<stdio.h>
int main(){
int arr[50];
int i,pos,data,size;
printf("enter the size of array\n");
scanf("%d",&size);
for(i=0;i<size;i++){
    printf("enter the elements of array\n");
    scanf("%d",&arr[i]);
}
for(i=0;i<size;i++){
    printf("elements of array of index [%d] : %d\n",i,arr[i]);
}
printf("enter data that you want to insert\n");
scanf("%d",&data);
printf("enter position  in which data insert\n");
scanf("%d",&pos);
if(pos<=0||pos>size+1){
    printf("invalid position\n");
}
else{
    for(i=size-1;i>=pos-1;i--){
        arr[i+1] = arr[i];}
        arr[pos-1] = data;
        size++;
    
}
printf("array element after insertion\n");
for(i=0;i<size;i++){
    printf("elements of array of index value : [%d] = %d\n",i,arr[i]);
}
printf("size of array : %d\n",size);
    return 0;

}