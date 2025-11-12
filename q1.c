#include <stdio.h>

int main (){
	int arr[5];
	
	printf("enter values for array:");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
		for(int i=1;i<5;i++){
			arr[i]=arr[i]+arr[i-1];
}
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	
}
		return 0;
	
}