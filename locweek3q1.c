#include <stdio.h>
#include <math.h>

int square(int a){
    return a*a;
}

int main(void) {
	int n;
	scanf("%d",&n);
	int ans = square(n);
	printf("%d",ans);
	return 0;
}

