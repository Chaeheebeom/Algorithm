#include <iostream> 
#include <stack>
#include <vector>
//깊이우선탐색 :  

using namespace std;

	int num=7;
	int check[7];//방문확인용 
	vector<int> arr[8];//그래프 

void dfs(int x){
	//기저조건 : 방문한 지점은 그냥 패스.
	if(check[x])
		return;
	//일단 방문한 것으로 확인.
	check[x]= true;
	
	cout << x << ' ';
	//방문지점의 자식들을 방문.
	for(int i=0;i<arr[x].size();i++){
		int y=arr[x][i];
		//재귀호출을 이용. 자식을 방문.
		dfs(y);
	}
}


int main(void){
	//그래프 생성.
	arr[1].push_back(2);
	arr[2].push_back(1);
	
	arr[1].push_back(3);
	arr[3].push_back(1);
	
	arr[2].push_back(3);
	arr[3].push_back(2);
	
	arr[2].push_back(4);
	arr[4].push_back(2);
	
	arr[2].push_back(5);
	arr[5].push_back(2);
	
	arr[4].push_back(5);
	arr[5].push_back(4);

	arr[3].push_back(6);
	arr[6].push_back(3);
	
	arr[3].push_back(7);
	arr[7].push_back(3);
	
	arr[6].push_back(7);
	arr[7].push_back(6);
	
	dfs(1);
	return 0;
}
