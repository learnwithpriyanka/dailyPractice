#include <stdio.h>


int isPrime(int n){
    if(n<=1){
        return 0;
    }
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
        
    }
    return 1;
}

int main() {
	// your code goes here
	
	int n;
	scanf("%d",&n);
 int res=isPrime(n);
	if(res==1){
	    printf("prime");
	}else{
	    printf("not prime");
	}

}