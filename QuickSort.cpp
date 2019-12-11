#include <stdio.h>

/*퀵정렬 O(NlogN)   최악의 경우 O(n^2) 
분할정복 알고리즘 - 배열의 원소를 나누어 계산. 
 특정한 값을 기준으로 큰 숫자와 작은 숫자를 나누어서 계산.(두 집합) 
*/
int number=10;
int arr[]={1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
void QuickSort(int *data,int start,int end){
	
	if(start>=end)
		return;
	
	int key=start; //pivot
	int i=start+1; //왼쪽에서부터 오른쪽으로 pivot보다 큰값을 찾아나감 
	int j=end; //오른쪽에서부터 왼쪽으로 pivot보다 큰 작은값을 찾아나감 이것이 기준이 되어 분할을 함. 
	int temp;
	
	while(true){
		while(data[i]<=data[key]){ //key값보다 큰 값을 찾는다 
			i++;
		}
		while(data[j]>=data[key] && j>start){ //key값보다 작은 값을 찾는다. 단 시작점 보다 index가 작아지면 안된다 
			j--;
		}
		if(i>j){//i가 j보다크다면 pivot과 작은 값을 바꾼다  - 엇갈린 것  
			temp=data[j];
			data[j]=data[key];
			data[key]=temp;
			break; 
		}else{ // 아니라면 정렬을 계속해야 하므로 i 와 j를 바꾼다.  
			temp = data[j];
			data[j]=data[i];
			data[i]=temp;
		}		
	}	
	//j값을 기준으로 분할해서 퀵정렬  
	QuickSort(data,start,j-1);
	QuickSort(data,j+1,end);
	
}

int main(void){
	
	QuickSort(arr,0,number-1);
	
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
