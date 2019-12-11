#include <iostream>
#include <queue>
#include <vector> 
//너비우선탐색 : 시작점과 가까운것 위주로 탐색 
//최단경로를 찾아줄 때 유용.  
using namespace std;

	int num=7;
	int check[7];//방문확인용 
	vector<int> arr[8];//그래프 

void bfs(int start){
	
	queue<int> q;
	q.push(start);
	check[start]=true;
	
	while(!q.empty()){
		int x=q.front();
		q.pop();
		printf("%d ",x);
		
		for(int i=0;i<arr[x].size();i++){
			int y=arr[x][i];
			if(!check[y])
			{
				q.push(y);
				check[y]=true;		
			}
		}
	}
}


int main(void){

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
	
	bfs(1);
	return 0;
}
