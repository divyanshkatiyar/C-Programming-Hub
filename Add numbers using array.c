#include<stdio.h>
int main() {
    int n;
    
    printf("How many number you want to enter to find sum?");
    scanf("%d", &n);
    
    int A [n];
    int i, sum = 0;
    
    for (i=0; i<n; i++) {
    	printf ("Enter number %d: ", i+1);
    	scanf("%d", & A[i]);
    }

    for (i=0; i<n; i++) {
    	sum = sum + A[i];
    }
    printf ("Sum of given %d numbers = %d ", n, sum);
    return 0;
}