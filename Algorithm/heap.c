#include<stdio.h>
int arr[50];
int main()
{
	int i,n;
	printf("---------------------------------------\n");
	printf("Enter the size of the array:- ");
	scanf("%d", &n);
	printf("---------------------------------------\n");
	printf("Enter the elements of array:- ");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("Your array is:- ");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("---------------------------------------\n");
	heapsort(arr,n);
	printf("Your array after being sorted:- ");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n---------------------------------------\n");
	return 0;
}
void heapsort(int arr[],int n) {
	int i,t;
	heapify(arr,n);
	for (i=n-1;i>0;i--) {
		t = arr[0];
		arr[0] = arr[i];
		arr[i] = t;
		adjust(arr,i);
	}
}
void heapify(int arr[],int n) {
	int k,i,j,item;
	for (k=1;k<n;k++) {
		item = arr[k];
		i = k;
		j = (i-1)/2;
		while((i>0)&&(item>arr[j])) {
			arr[i] = arr[j];
			i = j;
			j = (i-1)/2;
		}
		arr[i] = item;
	}
}
void adjust(int arr[],int n) {
	int i,j,item;
	j = 0;
	item = arr[j];
	i = 2*j+1;
	while(i<=n-1) {
		if(i+1 <= n-1)
		   if(arr[i]<arr[i+1])
		    i++;
		if(item<arr[i]) {
			arr[j] = arr[i];
			j = i;
			i = 2*j+1;
		} else
		   break;
	}
	arr[j] = item;
}