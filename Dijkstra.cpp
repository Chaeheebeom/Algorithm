#include <iostream>

int number = 6; //���� ����
int INF=1000000000; //���Ѵ밪

int a[6][6]={
	{0,2,5,1,INF,INF},
	{2,0,3,2,INF,INF},
	{5,3,0,3,1,5},
	{1,2,3,0,1,INF},
	{INF,INF,1,1,0,2},
	{INF,INF,5,INF,2,0},
};

bool visited[6]; //�湮�� ���
int distance[6]; ///�ִܰŸ��� �����ϱ� ���� �迭

//���� �ּҰŸ��� ������ ������ ��ȯ 
int getSmallIndex(){
	int min=INF;
	int index=0;
	for(int i=0;i<number;i++){
		//!visited[i]�� �־�� �� ��.
		if (distance[i]<min && !visited[i]){
			min=distance[i];
			index=i;
		}
	}
	return index;
}

void Dijkstra(int start){
	//�ϴ� �迭��  0,(0/1/2/3/4/5) ������ �ʱ�ȭ.
	for(int i=0;i<number;i++){
		//0,2,5,1,INF,INF
		distance[i]=a[start][i];
	}
	//�湮�� ������ true�� üũ.
	visited[start]=true;
	for(int i=0;i<number-2;i++){
		//���翡 �ּҰŸ��� ������ ���� ��ȯ.
		int current=getSmallIndex();
		visited[current]=true;
		//current�� �߿�.
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
