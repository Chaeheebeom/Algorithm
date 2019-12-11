#include <stdio.h> 

//각 숫자를 적절한 위치에 삽입.
// 시간복잡도 O(n^2) 

int main(void){

	int i,j,temp;
	
	int arr[]={1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	
	for(i=0;i<9;i++){
		j=i;
		while(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			j--;
		}
	}
	
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
