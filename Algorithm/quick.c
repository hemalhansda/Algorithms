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
	quicksort(arr,0,n-1);
	printf("Your array after being sorted:- ");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n---------------------------------------\n");
	return 0;
}
void quicksort(int arr[10],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(arr[i]<=arr[pivot]&&i<last)
                 i++;
             while(arr[j]>arr[pivot])
                 j--;
             if(i<j){
                 temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
             }
         }

         temp=arr[pivot];
         arr[pivot]=arr[j];
         arr[j]=temp;
         quicksort(arr,first,j-1);
         quicksort(arr,j+1,last);

    }
}