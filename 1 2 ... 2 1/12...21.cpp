#include<bits/stdc++.h>
using namespace std;


// Output : 
// 1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1

int main(){
	int highRange;
	cin >> highRange;
	int index = 1;
	int totalRange = highRange*2;
	for(int i = 1;i<totalRange;i++){
		if(i>highRange){
			cout << highRange-index << " ";
			index++;
		}
		else cout << i << " ";
	}
	return 0;
}
