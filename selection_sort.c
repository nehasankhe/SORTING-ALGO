//REf https://www.hackerearth.com/practice/algorithms/sorting/selection-sort/tutorial/

#include<stdio.h>

int array[10] = {7,10,0,-1};


void selectionSort (int n ) {

	int minimum = 0;

	int i = 0,j=0;

	for (i=0; i < n-1;i++) {

		minimum = i;

		for (j=i+1; j < n ; j++ ){

			if (array[j] < array[minimum]) {

				minimum = j;
			}
		}

		array[i] = array[i] ^ array[minimum];
		array[minimum] = array[i] ^ array[minimum];
		array[i] = array[i] ^ array[minimum];

	}
	
	
}


int main() {

	int i =0;

	printf("Before\n");
	for(i=0;i<4;i++) {

		printf("%d ",array[i]);
	}
	printf("\n");
	selectionSort(4);

	printf("Before\n");
	for(i=0;i<4;i++) {

		printf("%d ",array[i]);
	}
	printf("\n");

	
	
}
