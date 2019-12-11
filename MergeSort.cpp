#include <stdio.h>
//병합정렬 : 일단 반으로 나누고 나중에 합쳐서 정렬. 
// o(NlogN)을 보장
int number=10;
int sorted[10];//임시로 저장할 전역변수. 
//시작점 중간점 끝점 
void Merge(int a[],int m,int middle,int n) {
	
	int i=m;//첫점 
	int j=middle+1; //두번째 첫점. 
	int k=m;//정렬해서 합칠 점점 
	
	//첫번째가 먼저 끝나거나 두번째가 먼저 끝날떄까지 비교하여 정렬. 
	while(i<=middle && j<=n){
		if(a[i]<=a[j]){
			sorted[k]=a[i];
			i++;
		}else{
			sorted[k]=a[j];
			j++;
		}
		k++;
	}
	//남은 값들을 넣어준다. 
	if(i>middle){
		for(int t=j;t<=n;t++)
		{
			sorted[k]=a[t];
			k++;
		}
	}else{
		for(int t=i;t<=n;t++)
		{
			sorted[k]=a[t];
			k++;
		}
	}
	//정렬된 값을 다시 리턴 
	for(int t=m;t<=n;t++){
		a[t]=sorted[t];
	}
}
//m은 첫점 n은 끝점. 
void MergeSort(int a[],int m,int n){
	//m이 더 작은 경우 분할. 
	if (m<n){
		int middle = (m+n)/2; //가운데값을 만듬 
		MergeSort(a,m,middle); //첫점 부터 가운데 
		MergeSort(a,middle+1,n); //가운데부터 끝점. 
		Merge(a,m,middle,n); //실질적으로 머지하는 부분. 
	}
}

int main(void){
	
	int arr[]={1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	MergeSort(arr,0,number-1);
	
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
 
