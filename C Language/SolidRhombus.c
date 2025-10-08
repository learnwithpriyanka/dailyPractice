#include <stdio.h>

void SolidRombus(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            printf(" ");
        }
        
        for(int j=0;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}

int main() {
	// your code goes here
	
	int n;
	scanf("%d",&n);
	SolidRombus(n);
	

}

