#include <stdio.h>

int number=9;
int heap[9]={1, 5, 8, 7, 6, 4, 3, 2, 9};
int main(void){
	
	for(int i=1;i<number;i++){
		int c=i;
		do{
			int root = (c-1)/2; //���� �θ�. 
			if(heap[root]<heap[c]){ //�ڽİ��� �� ũ�� �ٲ���. 
				int temp=heap[root];
				heap[root]=heap[c];
				heap[c]=temp;
			}
			c=root; //�� �θ����� ������. 
		}while(c!=0);
	
	}
	for(int i=0;i<number;i++){
		printf("%d ",heap[i]);
	}
	
	printf("\n-------------\n");
	//ũ�⸦ �ٿ����� �ݺ������� ���� ����. 
	for(int i=number-1;i>=0;i--){
		int temp=heap[0];
		heap[0]=heap[i];
		heap[i]=temp;
		int root=0;
		int c=1;
		do{
			c=2*root+1; //�ڽ� ��.  
			if(heap[c]<heap[c+1]&&c<i-1){
				c++;
			}
			if(heap[root]<heap[c]&&c<i)
			{
				int temp=heap[root];
				heap[root]=heap[c];
				heap[c]=temp;
			}
			root=c;
		}while(c<i);
	}
	
	for(int i=0;i<number;i++){
		printf("%d ",heap[i]);
	}
	return 0;
}