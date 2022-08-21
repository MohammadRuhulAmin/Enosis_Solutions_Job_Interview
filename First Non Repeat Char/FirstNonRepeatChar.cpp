#include<bits/stdc++.h>
using namespace std;

void firstNonRepeatChar(string str){
	int length = str.length();
	bool check[length];
	memset(check,true,length);
	for(int i = 0;i<length;i++){
		char x = str[i];
		for(int j = 0;j<length;j++){
			if(i!=j){
				if(str[j] == x){
					check[i] = 0;
					break;
				}
			}
		}
	}
	// for(int i = 0;i<length;i++)cout << check[i] << " ";
	for(int i = 0;i<length;i++){
		if(check[i] == true){
			cout <<str[i];
			break;
		}
	}
}

int main(){
	
	string str = "abcdabcdkiou";
	cout << str << endl;
	firstNonRepeatChar(str);
	return 0;
}
