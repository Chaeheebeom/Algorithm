#include <stdio.h>

int number=9;
int heap[9]={1, 5, 8, 7, 6, 4, 3, 2, 9};
int main(void){
	
	for(int i=1;i<number;i++){
		int c=i;
		do{
			int root = (c-1)/2; //나의 부모값. 
			if(heap[root]<heap[c]){ //자식값이 더 크면 바꿔줌. 
				int temp=heap[root];
				heap[root]=heap[c];
				heap[c]=temp;
			}
			c=root; //또 부모값으로 가버림. 
		}while(c!=0);
	
	}
	for(int i=0;i<number;i++){
		printf("%d ",heap[i]);
	}
	
	printf("\n-------------\n");
	//크기를 줄여가며 반복적으로 힙을 구성. 
	for(int i=number-1;i>=0;i--){
		int temp=heap[0];
		heap[0]=heap[i];
		heap[i]=temp;
		int root=0;
		int c=1;
		do{
			c=2*root+1; //자식 값.  
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
