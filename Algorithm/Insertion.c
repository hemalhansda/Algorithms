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
	printf("\n ------------------------------ \n");
	printf("Your array is :- ");
	for(i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n ------------------------------ \n");
	printf("Press 1: For Sorting an array (Insertion Sort). \nPress 2: For exit. \n");
	int x;
	scanf("%d", &x);
	switch(x)
	{
		case 1:
		{
			int hole;
			for(i=1;i<n;i++)
			{
				int value = arr[i];
				hole = i;
				while( hole>0 && arr[hole-1]>value )
				{
					arr[hole] = arr[hole-1];
					hole = hole - 1;
				}
				arr[hole] = value;
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