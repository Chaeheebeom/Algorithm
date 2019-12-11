#include <stdio.h>

// 1 5 7 6 4 3 2 8 9 10
//버블정렬을 옆에 있는 것과 비교하는 것
//더 작은것을 앞으로 옮기는  
//시간복잡도 O(N^2) 
//계속해서 자리를 바꾸는 연산 때문에 선택정렬보다 느림.(18~20) 

int main(void){
	
	int i,j,temp;
	
	int arr[]={1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for(i=0;i<10;i++){
		for(j=0;j<9-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
