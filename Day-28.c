//code-55

#include <stdio.h>

int prime(int number){
	for ( int i = 2; i<= number;i++)
	{
		if ( number % i==0 && number != i)
		{
			return 0;
		}
	}
	return 1;
}

int main(){
	int input;
	scanf("%d" , &input);
	for ( int number = 2;number<=input;number++)
	{
		if (prime(number))
			printf("%d " , number);
	}
	return 0 ;
}

//code-56

#include <stdio.h>
#include <stdlib.h>

int main(){
	int size;
	int *arr=0;
	int length;
	scanf("%d", &size);
	arr=  malloc( size * sizeof(int));
	for (int i = 0 ; i< size; i++)
	{
		scanf(" %d" , &arr[i]);
	}
	for ( int i = 0 ; i<size;i++)
	{
		printf("%d " , arr[i]);
	}
	
	return 0 ;
}