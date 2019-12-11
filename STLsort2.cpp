#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<string, pair<int,int> > a,pair<string, pair<int,int> > b){
	if(a.second.first == b.second.first){
		return a.second.second<b.second.second;
	}else{
		return a.second.first<b.second.first;
	}
}

int main(void){
	vector<pair<string, pair<int, int> > > v;  //pair는 한쌍의 데이터를 말함. 
	
	v.push_back(pair<string , pair<int,int> >("A",pair<int, int>(90,19961220))); 
	v.push_back(pair<string , pair<int,int> >("B",pair<int, int>(80,19911220))); 
	v.push_back(pair<string , pair<int,int> >("C",pair<int, int>(70,19921220))); 
	v.push_back(pair<string , pair<int,int> >("D",pair<int, int>(90,19931220))); 
	v.push_back(pair<string , pair<int,int> >("E",pair<int, int>(60,19941220))); 
	
	sort(v.begin(),v.end(),compare);
	
	for(int i=0;i<v.size();i++){
		cout << v[i].first << " ";
	}
	return 0;
}
