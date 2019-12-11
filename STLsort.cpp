#include <iostream>
#include <algorithm> //sort()�Լ��� ����ϱ� ���� ���̺귯�� 

using namespace std;

class Student{
	public:
		string name;
		int score;
		Student(string name,int score){
			this->name=name;
			this->score=score;
		}
		//���ı��� 
		bool operator <(Student &student){
			return this->score < student.score;
		}
	
};


bool compare(int a,int b){
	return a>b;
}

int main(void){
	/*int arr[]={1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	//�迭�� �ּҿ� ���ּ�  
	sort(arr,arr+10,compare);
	
	for(int i=0;i<10;i++){
		cout <<arr[i]<<" "; 
	}*/
	Student students[]={
		Student("A",90),
		Student("B",91),
		Student("C",80),
		Student("D",60),
		Student("E",70)
	};
	
	sort(students,students+5);
	
	for(int i=0;i<5;i++){
		cout <<students[i].name <<" "; 
	}
	return 0;	
	
} 
