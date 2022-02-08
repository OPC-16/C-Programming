//transpose and determinant of matrix 
#include <stdio.h>
#include <stdlib.h>

int main() {

	printf("\nHere, we will find Transpose and Determinant of 3x3 Matrix :)\nFirst please fill-out the Matrix\n\n");
	int matrix[3][3] = {};

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			printf("Enter element %d of row %d >_ ",j+1,i+1);
			scanf("%d",&matrix[i][j]);
		}
	}

	printf("\nThe entered Matrix is >_ \n");
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			
			printf("  %d ",matrix[i][j]);

		}
		printf("\n");
	}

	//function to print the transpose
	printf("\nThe Transpose of your submitted matrix is >_ \n");
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			
			printf("  %d ",matrix[j][i]);

		}
		printf("\n");
	}

	//function to calculate determinant
	int determinant;

	determinant =(
		((matrix[0][0])*((matrix[1][1]*matrix[2][2])-(matrix[1][2]*matrix[2][1])))-
		((matrix[0][1])*((matrix[1][0]*matrix[2][2])-(matrix[1][2]*matrix[2][0])))+
		((matrix[0][2])*((matrix[1][0]*matrix[2][1])-(matrix[1][1]*matrix[2][0])))
		);
	printf("\nThe Determinant of your submitted matrix is >_ %d\n\n",determinant);



	return 0;
}
