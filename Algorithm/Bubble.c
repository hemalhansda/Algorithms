#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[50], n, i, j, temp;
	printf("Enter the size of the array:- ");
	scanf("%d", &n);
	printf("Enter the elements of the array:- ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n------------------------------ \n");
	printf("Your array is :- ");
	for(i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n------------------------------ \n");
	printf("Press 1: For Sorting an array (Bubble Sort). \nPress 2: For exit. \n");
	int x;
	scanf("%d", &x);
	switch(x)
	{
		case 1:
		{
			for(i=0;i<(n-1);i++)
			{
				int flag = 0;
				for(j=0;j<(n-i-1);j++)
				{
					if(arr[j]>arr[j+1])
					{
						temp = arr[j];
						arr[j] = arr[j+1];
						arr[j+1] = temp;
						flag = 1;
					}
				}
				if(flag==0){
					break;
				}
			}
			printf("The sorted array is:- ");
			printf("\n------------------------------ \n");
			for(i=0;i<n;i++)
			{
				printf("%d ", arr[i]);
			}
			printf("\n------------------------------ \n");
			break;
		}
		case 2:
		{
			exit(0);
			break;
		}
		default:
		{
			printf("\n------------------------------ \n");
			printf("Wrong Input!");
			printf("\n------------------------------ \n");
			break;
		}
	}
	return 0;
}