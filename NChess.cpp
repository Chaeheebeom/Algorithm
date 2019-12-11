#include <iostream>
#include <vector>

using namespace std;

int result=0;

vector<int> arr[4]; //4x4 ü����. 

int visited[4][4];

void search(int x,int y);

int NChess(int x,int y){
		
	for(int i=x;i<4;i++){
		for(int j=y;j<4;j++){
			if(!visited[i][j]){
				result++;
				visited[i][j]=true;
				search(i,j);	
			}
		}	
	}
}

void search(int x, int y){
		//������ �����ִ� �ڸ��� ���δ� true�� ����.
	
		for(int i=0;i<4;i++){
			//���� �¿� 
			visited[x][i]=true;
			visited[i][y]=true;
			//���ʴ밢�� //�����ʴ밢��
			if( !(x+i>4) || !(y+i>4) ){
				visited[x+i][y+i]=true;
			}
			if( !(x-i<0) || !(y-i<0) ){
				visited[x-i][y-i]=true;
			}
			if( !(x+i>4 )|| !(y-i<0) ){
				visited[x+i][y-i]=true;
			}
			if( !(x-i<0) || !(y+i>4) ){
				visited[x-i][y+i]=true;
			} 	
		}
}
void printArr(void){
	cout<<"-----------------"<<endl;
	for(int i=0;i<arr[i].size();i++){
		for(int j=0;j<arr[i].size();j++){
			cout<<arr[i].at(j)<<' ';
		}
		cout<<endl;
	}
	cout<<"-----------------"<<endl;
}

void printVisited(void){
	cout<<"-----------------"<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<visited[i][j]<<' ';
		}
		cout<<endl;
	}
	cout<<"-----------------"<<endl;
}

void initArr(void){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			arr[i].push_back(0);
		}
	}
}

int main(void){
	
	initArr();
	NChess(0,0);
	//printArr();
	printVisited();
	cout<<"result : "<<result<<endl;
}
