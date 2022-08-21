#include<bits/stdc++.h>
using namespace std;
string revString(string str){
	int length = str.length();
	string fString = "";
	for(int i = length-1;i>=0;i--)fString += str[i];
	return fString;
}

int main(){
	string str;
	cin >> str;
	cout << revString(str);
	
	
	return 0;
}
