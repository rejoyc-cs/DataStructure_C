/* Finding Min and Max from an array */ 

#include <stdio.h>

int main(){
	printf("Enter the number of elements: ");
	int n;
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the elements: \n");
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int min=a[0],max=a[0];
	for (int i=1;i<n;i++){
		if (a[i]<min){
			min = a[i];
		}
		if (a[i]>max){
			max = a[i];
		}
	}
	
	printf("\nMax: %d and Min: %d",max,min);
	return 0;
}
