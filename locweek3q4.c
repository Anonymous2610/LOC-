#include <stdio.h>
int fact( int n ){
    if( n >= 1)
        return n * fact(n - 1);
    else 
        return 1;
}

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	printf("%d", fact(n));
	
	return 0;
#include <math.h>

int factorial(int a){
    int ans = 1;
    while( a > 0 ){
        ans = ans*a;
        a = a-1;
    }
    
    return ans;
}

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	
	int ans = factorial(n);
	
	printf("%d",ans);
	
	return 0;
}