#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool isPalindrome(int number){
	
	stringstream ss;
	ss << number;
	string str = ss.str();
	
	int size=str.length();
	for(int i=0;i<size;i++){
		if(str[i]!=str[size-i-1])
			return false;
	}
	return true;
}

int* ReverseAndAdd(int number){
	int result=0;
	
	while(!isPalindrome(number)){
		result++;
		int n=number;
		int reversedNumber = 0, remainder;
		while(n != 0)
    	{
       		remainder = n%10;
        	reversedNumber = reversedNumber*10 + remainder;
        	n /= 10;
    	}
		number+=reversedNumber;
	}
	int arr[]={result,number};
	return arr;
}

int main(void){
	
	int N=0;
	
	cin >> N;

	for(int i=0;i<N;i++){
		int num;
		cin>>num;
		int* arr=ReverseAndAdd(num);
		printf("%d %d\n",arr[0],arr[1]);
	}	
}
