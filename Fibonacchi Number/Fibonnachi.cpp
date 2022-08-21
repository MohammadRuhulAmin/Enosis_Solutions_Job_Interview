#include<bits/stdc++.h>
using namespace std;


void PrintFibbonachi(int range){
	
	int s = 0;
	int n = 1;
	//cout << s << " " << n << " ";
	while(s<=range){
		if(s == 0 && n == 1)cout << s << " " << n << " ";
		int x = s + n;
		cout << x << " ";
		s = n;
		n = x; 
	}
}

int main(){
	int range;
	cin >> range;
	PrintFibbonachi(range);
	return 0;
}
