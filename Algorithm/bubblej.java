import java.util.Scanner;
class bubblej
{
	public static void main(String args[]){
		int arr[] = new int[10];
		Scanner a = new Scanner(System.in);
		System.out.println("Enter the size of the array:- ");
		int n = a.nextInt();
		System.out.println("Enter the elements of the array:- ");
		for(int i=0;i<n;i++){
			arr[i] = a.nextInt();
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<(n-1);j++){
				if(arr[j]<arr[j+1]){
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
		System.out.println("The sorted Elements are:- ");
		for(int i=0;i<n;i++){
			System.out.print(arr[i]+" ");
		}
	}
}