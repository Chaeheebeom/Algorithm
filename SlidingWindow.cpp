#include <iostream>

using namespace std;

int main(void){
	//���̸� ��Ÿ���� n�� �����̵������� ����� ��Ÿ���� K 
	int n,k;
	
	cin >> n >> k;
	//�Է¹��� �迭. 
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	//�ݺ��� Ƚ�� 
	int loop=n-k+1;
	//�����찡 �����϶����� �ִ� �ּҰ��� �־��� �迭. 
	int* maxArr=new int[loop];
	int* minArr=new int[loop];
	//�������� ó���� ���� �˱����� ���� 
	int first=0,last=k;
	//�����찡 �����̸鼭 �ִ��ּҰ��� �����Ѵ�. 
	for(int i=0;i<loop;i++){
		int max=0,min=9999;
		//�����쳻���� �ִ�/�ּҰ��� ã�´�. 
		for(int j=first;j<last;j++){
			if(max<arr[j])
				max=arr[j];
			if(min>arr[j])
				min=arr[j];
		}
		//ã�� ���� �� �迭�� �����Ѵ�.
		maxArr[i]=max;
		minArr[i]=min;
		//�����츦 ��ĭ�� �ȱ��.
		first++;
		last++; 
	}
	//��� ��� 
	for(int i=0;i<loop;i++){
		cout << minArr[i]<<' ';
	}
	cout<<endl;
	for(int i=0;i<loop;i++){
		cout << maxArr[i]<<' ';
	}
	delete[] maxArr;
	delete[] minArr;
}
