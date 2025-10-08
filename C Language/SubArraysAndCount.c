#include <stdio.h>

void SubArrayAndCount(int arr[], int n){
     int count=0;
    for(int i=0;i<n;i++){
        int start=i;
        for(int j=i;j<n;j++){
            int end=j;
            for(int k=start;k<=end;k++){
                printf("%d,",arr[k]);
               
            }
             printf("\n");
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
    SubArrayAndCount(arr ,n);
    
	
	return 0;
	

}

