#include <iostream>
#include <string>
#include <regex>

using namespace std;

bool isSlump(string str){
	regex slump("^[D|E][F]+([D|E][F]+){0,}G$");
	
	if(regex_match(str,slump))
		return true;
	else
		return false;
}

bool isSlimp(string& str){
	regex slimp("(AH|AB(AH){1,}C|A(AH){1,}C)");
	regex slimp2("^(AH|AB(AH){1,}C|A(AH){1,}C)");
	
	if(regex_match(str,slimp2)){
		return true;
	}else{
		regex_replace(str,slimp,"");
		return isSlimp(str);
	}	
}

bool isSlurpy(string str){
	if(isSlimp(str)){
		if(isSlump(str))
			return true;
	}
	else
		return false;
}

int main(void){
	/*string s="aaa123";
	regex number("[a]+[0-9]+");
	
	if(regex_match(s,number)){
		cout<<"matched!"<<endl;
	}else{
		cout <<"not matched!"<<endl;
	}*/
	int n;
	cin >>n;
	for(int i=0;i<n;i++){
		string str;
		cin >>str;
		if(isSlurpy(str))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
	return 0;
}
