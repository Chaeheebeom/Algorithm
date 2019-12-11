#include <iostream>
#include <vector>
#include <queue>
#define MAX 10

using namespace std;

int n , inDegree[MAX];
vector<int> a[MAX];

void topologySort(){
	//위상정렬결과를 저장하기 위한 배열. 
	int result[MAX];
	queue<int> q;
	//처음에는 진입차수가 0인것을 큐에 넣어준다. 
	for(int i=1;i<=n;i++){
		if(inDegree[i]==0) q.push(i);
	}
	//실질적으로 위상정렬 하는 부분. 
	for(int i=1;i<=n;i++){
		//큐가 비어있다면 싸이클이 발생한 것. 
		if(q.empty()){
			printf("싸이클 발생");
			return;
		}
		int x=q.front();
		q.pop();
		result[i]=x;
		
		for(int i=0;i<a[x].size();i++){
			//큐에서 꺼낸 정점의 간선들을 제거하고 만약 진입간선이 0이라면 큐에 넣어준다. 
			int y= a[x][i];
			if(--inDegree[y]==0)
				q.push(y);
		}
	}
	
	for(int i=1;i<=n;i++){
		printf("%d ",result[i]);
	}
}
int main(void){
	n=7;
	a[1].push_back(2);
	inDegree[2]++;
	a[1].push_back(5);
	inDegree[5]++;
	a[2].push_back(3);
	inDegree[3]++;
	a[3].push_back(4);
	inDegree[4]++;
	a[4].push_back(6);
	inDegree[6]++;
	a[5].push_back(6);
	inDegree[6]++;
	a[6].push_back(7);
	inDegree[7]++;
	topologySort();
}
