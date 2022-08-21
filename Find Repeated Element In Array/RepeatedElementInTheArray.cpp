#include<bits/stdc++.h>
using namespace std;
#define max 100

// {1,2,3,4,1,2,3}
//ans :=> 4

int main(){
	int array[max];
	bool visited[max];
	int range;
	cin >> range;
	for(int i = 0;i<range;i++)cin >> array[i];
	vector<int>repeatedElem;
	memset(visited,range,false);
	for(int i = 0;i<range;i++){
		int elem = array[i];
		bool isRepeated = false;
		if(!visited[i]){
			for(int j = 0;j<range;j++){
				if(i!=j){
					if(elem == array[j]){
						visited[i] = true;
						visited[j] = true;
						isRepeated = true;
					}
				}
			}
		}
		if(isRepeated)repeatedElem.push_back(elem);
	}
	
	int length = repeatedElem.size();
	cout << endl;
	cout << "Repeated Elements Are : \n";
	for(int i = 0;i<length;i++)cout << repeatedElem[i] << " ";
	
		
	
	
	
	
	
	return 0;
}
