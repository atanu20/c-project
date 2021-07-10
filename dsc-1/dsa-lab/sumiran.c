#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1,cu=1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        if(cu==5 || cu ==9 || cu==21)
        {
        	printf("%d, ", t1);
		}
		cu=cu+1;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
