// (Ai AND Aj) XOR (AI OR Aj) WHERE i!=j
// hackerearth problem
// problem is time exceeded for some input files ( time< 1 sec)

#include <stdio.h>
#include<limits.h>
int main(){
	int num;
	scanf("%d", &num);              	                  // Reading input from STDIN
	
	while(num-->0)
	{
		int n;
		scanf("%d",&n);
		unsigned int arr[n];
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);

		int min=INT_MAX;
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n-1;j++)
			{
				int temp=((arr[i]&arr[j+1])^(arr[i]|arr[j+1]));
				printf("%d,%d,(&=%d),(|=%d),(&^|=%d)\t and %d = \n",arr[i],arr[j+1],(arr[i]&arr[j+1]),arr[i]|arr[j+1],(arr[i]&arr[j+1])^(arr[i]|arr[j+1]),arr[i]^arr[j+1]);

				if(temp<min)
					min=temp;
			}
			
				
		}

		// for(int i=0;i<n;i++)
		// {
		// 	for(int j=i;j<n-1;j++)
		// 	{
		// 		int temp=((arr[i]&arr[j+1])^(arr[i]|arr[j+1]));
		// 		printf("%d,%d,(&=%d),(|=%d),(&^|=%d)\n",arr[i],arr[j+1],(arr[i]&arr[j+1]),arr[i]|arr[j+1],(arr[i]&arr[j+1])^(arr[i]|arr[j+1]));

		// 	if(temp<min)
		// 		min=temp;
		// 	}	
		// }
		printf("%d\n",min);
		

	}
}
