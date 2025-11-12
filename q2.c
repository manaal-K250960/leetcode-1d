#include <stdio.h>

void shuffle(int arr[],int n,int result[]){
	int j=0;
		for(int i=0;i<n;i++){
			result[j++]=arr[i];
			result[j++]=arr[i+n];
}
}
int main(){
	int n;
	printf("enter value for n:");
	scanf("%d",&n);
	int size=2*n;
	
	int arr[1000];
	int result[1000];
	printf("enter values for array:");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	shuffle(arr,n,result);
	printf("shuffled array:");
	for(int i=0;i<size;i++){
		printf("%d ",result[i]);
	}
	printf("\n");
	
	return 0;
	
}