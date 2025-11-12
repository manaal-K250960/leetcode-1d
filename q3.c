#include <stdio.h>

int main(){
		int n;
	printf("enter value for n:");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter values for array:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
		for(int i=0;i<n;i++){
			if(arr[i]%2==0){
				arr[i]=0;
			}
				else{
					arr[i]=1;
				}
			}

int temp;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++)
		if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		}
		
			for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	
}
		return 0;
	
}
