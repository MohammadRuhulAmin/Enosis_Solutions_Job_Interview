#include<bits/stdc++.h>
using namespace std;

// Output : 10 9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9 10

// 20-10 20-11 20-12     ........  20 -19  20 - 21 20-22 20-23......

int main(){
	int highRange;
	cin >> highRange;
	int totalRange = highRange*2;
	for(int i = 0;i<=totalRange;i++){
		int res = totalRange-(totalRange/2 + i);
		if(res == 0)continue;
		else if(res<0){
			if(res == -1)continue;
			else res*=-1;
		}
		cout << res << " ";
	}
		
	
	return 0;
}
