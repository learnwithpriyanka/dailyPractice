#include <stdio.h>


int BinarySearch(int arr[],int n,int target){
    int start=0,end=n-1;
    
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        
        if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    
    return -1;
}

int main() {
	// your code goes here
	
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
	int indx=BinarySearch(arr,n,20);

if(indx!=-1){
    	printf("%d",indx);
}else{
    printf("not found");
}
	
	
	

}

