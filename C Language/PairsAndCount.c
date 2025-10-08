#include <stdio.h>

void PairsAndCount(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        int current=arr[i];
        for(int j=i+1;j<n;j++){
            printf("(%d , %d)",current,arr[j]);
            count++;
        }
        printf("\n");
    }
    
    printf("%d",count);
    
}


int main(){
    
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    PairsAndCount(arr ,n);
    
	
	return 0;
	

}

