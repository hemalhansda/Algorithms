#include<stdio.h>
#define MAX 20
int main()
{
	int a,n,i,j,arr[MAX];
	printf("Enter the size of the array:- ");
	scanf("%d", &n);
	printf("Enter the elements of the array:- \n");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	return 0;
}