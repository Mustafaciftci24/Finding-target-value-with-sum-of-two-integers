#include <stdio.h>
#include <math.h>
#include <limits.h>

void findTargetVal(int arr[],int arr2[],int tar,int *current_max_sum,int *max_sum){
    int current_sum,i,j;
    for (i=0;i<6;i++){
        for(j=0;j<6;j++){
            current_sum = arr[i] + arr2[j];
            if(abs(tar - current_sum) < abs(tar-*max_sum)){
                *max_sum = current_sum;
            }
        }
    }
    *current_max_sum = *max_sum;
    *max_sum = INT_MAX;
    for (i=6;i>=0;i--){
        for(j=6;j>=0;j--){
            current_sum = arr[i] + arr2[j];
            if(abs(tar - current_sum) < abs(tar-*max_sum)){
                *max_sum = current_sum;
            }
        }
    }
}
int main() {
    int arr[]={-1,3,8,2,9,5};
    int arr2[]={4,1,2,10,5,20};
    int target,max_sum=INT_MAX,current_max_sum;
    printf("Enter your target number\n");
    scanf("%d",&target);
    findTargetVal(arr,arr2,target,&current_max_sum,&max_sum);
    if (max_sum==current_max_sum)
        printf("Your target number is %d closest number is %d \n",target,current_max_sum);
    else
        printf("Your target number is %d closest number is %d or %d\n",target,max_sum,current_max_sum);
    return 0;
}
/*
hallo hallo hallo 
make new changes

*/