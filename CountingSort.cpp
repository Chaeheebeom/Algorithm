#include <iostream>

int main(void){
	int temp;
	int count[5];
	int arr[30]={1,2,3,1,4,
				5,1,2,3,1,
				2,4,5,5,4,
				3,5,4,2,3,
				4,2,3,4,1,
				2,3,1,2,3};
	
	for(int i=0;i<5;i++){
		count[i]=0;
	}
	
	for(int i=0;i<30;i++){
		count[arr[i]-1]++;
	}
	
	for(int i=0;i<5;i++){
		if(count[i]!=0){
			for(int j=0;j<count[i];j++){
				printf("%d",i+1);
			}
		}
	}
	return 0;
}
