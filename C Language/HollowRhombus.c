#include <stdio.h>

void HollowRombus(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            printf(" ");
        }
        
        for(int j=0;j<=n;j++){
            if(i==0||i==n-1||j==n-1||j==0){
              printf("*");  
            }else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
}

int main() {
	// your code goes here
	
	int n;
	scanf("%d",&n);
	HollowRombus(n);
	

}

