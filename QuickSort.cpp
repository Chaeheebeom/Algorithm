#include <stdio.h>

/*������ O(NlogN)   �־��� ��� O(n^2) 
�������� �˰��� - �迭�� ���Ҹ� ������ ���. 
 Ư���� ���� �������� ū ���ڿ� ���� ���ڸ� ����� ���.(�� ����) 
*/
int number=10;
int arr[]={1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
void QuickSort(int *data,int start,int end){
	
	if(start>=end)
		return;
	
	int key=start; //pivot
	int i=start+1; //���ʿ������� ���������� pivot���� ū���� ã�Ƴ��� 
	int j=end; //�����ʿ������� �������� pivot���� ū �������� ã�Ƴ��� �̰��� ������ �Ǿ� ������ ��. 
	int temp;
	
	while(true){
		while(data[i]<=data[key]){ //key������ ū ���� ã�´� 
			i++;
		}
		while(data[j]>=data[key] && j>start){ //key������ ���� ���� ã�´�. �� ������ ���� index�� �۾����� �ȵȴ� 
			j--;
		}
		if(i>j){//i�� j����ũ�ٸ� pivot�� ���� ���� �ٲ۴�  - ������ ��  
			temp=data[j];
			data[j]=data[key];
			data[key]=temp;
			break; 
		}else{ // �ƴ϶�� ������ ����ؾ� �ϹǷ� i �� j�� �ٲ۴�.  
			temp = data[j];
			data[j]=data[i];
			data[i]=temp;
		}		
	}	
	//j���� �������� �����ؼ� ������  
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
