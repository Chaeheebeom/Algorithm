#include <iostream>

int number = 6; //정점 개수
int INF=1000000000; //무한대값

int a[6][6]={
	{0,2,5,1,INF,INF},
	{2,0,3,2,INF,INF},
	{5,3,0,3,1,5},
	{1,2,3,0,1,INF},
	{INF,INF,1,1,0,2},
	{INF,INF,5,INF,2,0},
};

bool visited[6]; //방문한 노드
int distance[6]; ///최단거리를 저장하기 위한 배열

//가장 최소거리를 가지는 정점을 반환 
int getSmallIndex(){
	int min=INF;
	int index=0;
	for(int i=0;i<number;i++){
		//!visited[i]이 있어야 만 함.
		if (distance[i]<min && !visited[i]){
			min=distance[i];
			index=i;
		}
	}
	return index;
}

void Dijkstra(int start){
	//일단 배열에  0,(0/1/2/3/4/5) 값으로 초기화.
	for(int i=0;i<number;i++){
		//0,2,5,1,INF,INF
		distance[i]=a[start][i];
	}
	//방문한 지점은 true로 체크.
	visited[start]=true;
	for(int i=0;i<number-2;i++){
		//현재에 최소거리를 가지는 정점 반환.
		int current=getSmallIndex();
		visited[current]=true;
		//current가 중요.
		for(int j=0;j<number;j++){
			if (!visited[j]){
				if(distance[current]+a[current][j]<distance[j]){
					distance[j]=distance[current]+a[current][j];
				}
			}
		}
	}
}

//1. visited[0]=true  current=0  visited[0]=true visited[4] 
//2. i=1 current=3 visited[3]=true visited[1]/distance[3]+a[3][1] 2 <distance[1] 2<   visited[2]/distance[3] 1 +a[3][2] 2 <distance[2]5     
//visited[5]/distance[3] 1 +a[3][5] INF <distance[j] INF


int main(void){
	Dijkstra(0);
	for(int i=0;i<number;i++){
		printf("%d ",distance[i]);
	}
}
