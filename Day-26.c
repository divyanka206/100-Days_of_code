//code-51

#include <stdio.h>

int main(){
	int limit = 5 ;
	for ( int row = 0 ; row < 5 ; row++)
	{
		for ( int count = 1; count <= 5; count++)
		{
			if ( count >= limit)
			{
				printf("%d " , count);
			}
			
			else
				printf(" ");
		}
		
		limit--;
		printf("\n");
	}
	return 0 ;
}

//code-52

#include <stdio.h>

int main(){
	int times = 1;
	int antiloop=3;
	for ( int row = 1 ;row <=3 ; row++)
	{
		for ( int count = 1 ; count<=times;count++)
		{
			printf("*\n");
		}
		times+=2;
		printf("\n");
	}
	for ( int row = 1 ; row <=2 ; row++)
	{
		for ( int count = 1 ; count <= antiloop; count++)
		{
			printf("*\n");
		}
		antiloop -=2;
		printf("\n");
	}
	return 0 ;
}
