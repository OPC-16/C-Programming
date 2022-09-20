/* --- pyramid of numbers ---
	Author >_ OPC
*/
#include<stdio.h>

 int main() {
	 int n=0;
	 printf("Enter number of rows >_ ");
	 scanf("%d",&n);

	 for(int row=1; row<=n; row++) {
		 for(int space=1; space<=n-row; space++) {
			 printf(" ");
		 }
		 for(int i=1; i<=row; i++) {
			 printf("%d",i);
		 }
		 if( row == 1) {
			 printf("\n");
		 }

		 if( row != 1) {
			 for(int t=row-1; t>=1;t--) {
				 printf("%d",t);
			 }
			 printf("\n");
		 }
	 } // for-loop
   
 } // main
