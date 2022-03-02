/* Finding Min and Max from an array with Optimal Comparisons */ 

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

	int n2 = (n/2)+1;
	int small[n2],large[n2];
	
	int i=0,k=0;
	
	while (i<((n/2)*2)) {
		if (a[i] < a[i+1]) {
			small[k] = a[i];
			large[k] = a[i+1];
		}
		else{
			small[k] = a[i+1];
			large[k] = a[i];
		}
		i+=2;
		k++;
	}

	if (i==n-1){
		small[k] = a[i];
		large[k] = a[i];
	}
	else{
		k--;
	}
	
	/*
	printf("\nSmall array: \n");
	for (int j=0;j<=k;j++){
		printf("%d\t",small[j]);
	}
	printf("\nLarge array: \n");
	for (int j=0;j<=k;j++){
		printf("%d\t",large[j]);
	}
	*/
	
	int min=small[0],max=large[0];
	for (int j=1;j<=k;j++){
		if (small[j]<min){
			min = small[j];
		}
		if (large[j]>max){
			max = large[j];
		}
	}
	
	printf("\n\nMax: %d and Min: %d",max,min);
	return 0;
}
