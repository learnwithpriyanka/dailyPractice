#include <stdio.h>
#include<limits.h>

void MinMaxSubArraysSum(int arr[], int n){
    
    int maxSum=INT_MIN;
    int minSum=INT_MAX;
    int currentSum=0;
     
    for(int i=0;i<n;i++){
        int start=i;
        for(int j=i;j<n;j++){
            int end=j;
             currentSum=0;
            for(int k=start;k<=end;k++){
                printf("%d ",arr[k]);
                currentSum+=arr[k];
               
            }
            
            printf("\n");
           
            if(currentSum>maxSum){
                maxSum=currentSum;
            }
            
            if(currentSum<minSum){
                minSum=currentSum;
            }
            
             
             
             
        }
        printf("\n");
    }
    
    
    printf("%d\n",maxSum);
    printf("%d",minSum);
    int diff=maxSum-minSum;
    printf("\n%d",diff);
     
    
}


int main(){
    
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    MinMaxSubArraysSum(arr ,n);
    
	
	return 0;
	

}

