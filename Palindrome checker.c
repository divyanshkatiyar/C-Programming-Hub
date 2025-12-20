#include<stdio.h>

int main() {
	int rev=0;
	int num, original, rem;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	original=num;
	
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	if(original==rev){
	  printf("%d is palindrome number.", original);
	}
	else{
		printf("%d is NOT palindrome number.", original);
	}
	return 0;
}
