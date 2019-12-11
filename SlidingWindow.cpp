#include <iostream>

using namespace std;

int main(void){
	//길이를 나타내는 n과 슬라이딩윈도우 사이즈를 나타내는 K 
	int n,k;
	
	cin >> n >> k;
	//입력받은 배열. 
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	//반복할 횟수 
	int loop=n-k+1;
	//윈도우가 움직일때마다 최대 최소값을 넣어줄 배열. 
	int* maxArr=new int[loop];
	int* minArr=new int[loop];
	//윈도우의 처음과 끝을 알기위한 변수 
	int first=0,last=k;
	//윈도우가 움직이면서 최대최소값을 저장한다. 
	for(int i=0;i<loop;i++){
		int max=0,min=9999;
		//윈도우내에서 최대/최소값을 찾는다. 
		for(int j=first;j<last;j++){
			if(max<arr[j])
				max=arr[j];
			if(min>arr[j])
				min=arr[j];
		}
		//찾은 값을 각 배열에 저장한다.
		maxArr[i]=max;
		minArr[i]=min;
		//윈도우를 한칸씩 옴긴다.
		first++;
		last++; 
	}
	//결과 출력 
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
