#include <stdio.h>
//�������� : �ϴ� ������ ������ ���߿� ���ļ� ����. 
// o(NlogN)�� ����
int number=10;
int sorted[10];//�ӽ÷� ������ ��������. 
//������ �߰��� ���� 
void Merge(int a[],int m,int middle,int n) {
	
	int i=m;//ù�� 
	int j=middle+1; //�ι�° ù��. 
	int k=m;//�����ؼ� ��ĥ ���� 
	
	//ù��°�� ���� �����ų� �ι�°�� ���� ���������� ���Ͽ� ����. 
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
	//���� ������ �־��ش�. 
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
	//���ĵ� ���� �ٽ� ���� 
	for(int t=m;t<=n;t++){
		a[t]=sorted[t];
	}
}
//m�� ù�� n�� ����. 
void MergeSort(int a[],int m,int n){
	//m�� �� ���� ��� ����. 
	if (m<n){
		int middle = (m+n)/2; //������� ���� 
		MergeSort(a,m,middle); //ù�� ���� ��� 
		MergeSort(a,middle+1,n); //������� ����. 
		Merge(a,m,middle,n); //���������� �����ϴ� �κ�. 
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
 
