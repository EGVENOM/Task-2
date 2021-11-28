#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int M, N, X;
	
	int counter=0, array[10][10];
	
	printf("Enter the number of rows: ");
		
	scanf("%d",&N);
	
	printf("Enter the number of columns: ");
		
	scanf("%d",&M);
	
	for(int i=0;i<=N;i++){
	
		for(int j=0;j<=M;j++)
			{
			array[i][j] = rand()%10;
			printf("%2d",array[i][j]);
			}
		}
   printf("\n");
   
   printf("Enter the number 'x' that you want to search for: ");
   
   scanf("%d",&X);
   
   	for(int i=0;i<=N;i++){
	   
		for(int j=0;j<=M;j++)
			{if (array[i][j]==X) {printf("The number %d is found in the array",X);
			counter++;}
			if (counter==0)
			printf("Not found");
		
			}
					}
				
return 0
}
