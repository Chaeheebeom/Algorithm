#include <iostream>

using namespace std;

int main(void){
	
	while(true){
		//m : �� �Խù� �� n : ���������� ������ �Խù���  
		int m,n;
		cin >> m >> n;
		//n�� 0�̶�� �׳� ����. 
		if(n==0)
			break;
		else if(n<0)
			continue;
		
		int result=0;
		
		//�Խ������̽ø� �˾Ƴ��� �κ�. 
		while(m/n!=0){
			int temp=m/n;
			result+=temp;
			m=m%n;
		}
		if(m!=0){
			result++;
		}
		//��� ���. 
		cout << result <<endl;			
	}
	return 0;
}
