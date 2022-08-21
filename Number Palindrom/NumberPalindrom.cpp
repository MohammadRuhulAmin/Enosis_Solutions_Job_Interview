#include<bits/stdc++.h>
using namespace std;

/*
	just reverse the number and check 
*/

int reverseNumber(int number){
	int tempNum = 0;
	while(number>0){
		int temp = number%10;
		tempNum*=10;
		number/=10;
		tempNum += temp;
		
	}
	return tempNum;
}

int main(){
	
	int number = 121;
	int revNumb = reverseNumber(number);
	if(number == revNumb)cout << "Palindrom";
	else cout << "Not Palindrom";
	return 0;
}
