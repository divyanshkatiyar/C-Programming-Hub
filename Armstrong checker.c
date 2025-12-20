#include<stdio.h>
int main(){
	int num, original, rem, sum=0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	original=num;
	
	while(num!=0){
		rem=num%10;
		sum+=rem*rem*rem;
		num/=10;
	}
	if(sum==original){
		 printf("%d is armstrong number.", original);
	}
	else{
		printf("%d is NOT armstrong number.", original);
	}
	return 0;
}
