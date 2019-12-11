#include <iostream>

using namespace std;

int main(void){
	
	while(true){
		//m : 총 게시물 수 n : 한페이지에 보여줄 게시물수  
		int m,n;
		cin >> m >> n;
		//n이 0이라면 그냥 종료. 
		if(n==0)
			break;
		else if(n<0)
			continue;
		
		int result=0;
		
		//게시판페이시를 알아내는 부분. 
		while(m/n!=0){
			int temp=m/n;
			result+=temp;
			m=m%n;
		}
		if(m!=0){
			result++;
		}
		//결과 출력. 
		cout << result <<endl;			
	}
	return 0;
}
