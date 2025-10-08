#include <stdio.h>

void DiamondPattern(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        
        for(int j=1;j<=2*i-1;j++){
            
              printf("*");  
        }
        
        printf("\n");
    }
    
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        
        for(int j=1;j<=2*i-1;j++){
            
              printf("*");  
        }
        
        printf("\n");
    }
    
}

int main() {
	// your code goes here
	
	int n;
	scanf("%d",&n);
	DiamondPattern(n);
	

}

