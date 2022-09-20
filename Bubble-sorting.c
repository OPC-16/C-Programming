#include <stdio.h>

//swaping function
void swap_arr(int *xp, int *yp) {
	int temp = *xp;	
	*xp = *yp;
	*yp = temp;

}// swap_arr

//bubble sorting function
void bubble_sort(int arr[], int n) {
	int i,j;

	for(i=0; i<n-1; i++) {
		for(j=0; j<n-i-1; j++) {
			if(arr[j] > arr[j+1]) {
				swap_arr(&arr[j],&arr[j+1]);
			} 
		}
	}

} // bubble_sort

void print_arr(int arr[], int n) {
	for(int i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
} // print_arr

int main() {

	int arr[] = {23,15,73,73,29,37,17};
	int n = 7;  /*coz there are 7 elements in array...can also be 
                	written as n = sizeof(arr)/sizeof(arr[0]) */

	bubble_sort(arr,n);
	printf("The sorted array is >_ ");
	print_arr(arr,n);

	return 0;
} // main
