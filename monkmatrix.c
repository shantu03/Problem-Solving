//HACKERRANK PROBLEM 
//https://www.hackerearth.com/practice/codemonk/ 

#include <stdio.h>
int counting(int size, int arr[size][size],int count)
{
	for(int i=0;i<size-1;i++)
		for(int j=0;j<size-1;j++)
			for(int k=0;j<size-1;k++)
				if((arr[j][k]>arr[j+1][k+1])||(arr[k][i]>arr[k+1][i+1]))
					count++;

printf("End of the function");
return count;
}
int main(){
	int num;
	scanf("%d", &num);              	                  // Reading input from STDIN
	while(num)
	{
	int count=0;
		int size;
		scanf("%d",&size);
		int arr[size][size];
		for(int i=0;i<size;i++)
			for(int j=0;j<size;j++)
				scanf("%d",&arr[i][j]);
				
		count = counting(size,arr,count);
		printf("%d",count);
		num--;
	}
	printf("End of the program ");
}
