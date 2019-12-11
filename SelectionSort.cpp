#include <stdio.h>

//selecion sort
//가장 작은 것을 선택해서 앞으로 보내는 것.
//n번 반복 시간복잡도 O(n^2) 

int main(void){
	int i,j,min,index,temp;
	
	int arr[]={1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for(i=0;i<10;i++){
		min=9999;
		for(j=i;j<10;j++){
			if(min>arr[j]){
				min=arr[j];
				index=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[index];
		arr[index]=temp;
	}
	
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
} 
