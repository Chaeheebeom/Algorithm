#include <stdio.h>

// 1 5 7 6 4 3 2 8 9 10
//���������� ���� �ִ� �Ͱ� ���ϴ� ��
//�� �������� ������ �ű��  
//�ð����⵵ O(N^2) 
//����ؼ� �ڸ��� �ٲٴ� ���� ������ �������ĺ��� ����.(18~20) 

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
