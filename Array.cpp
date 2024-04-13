#include <iostream>
using namespace std;

int score [] = {6,3,4,2,4};
int n, result=0;

int main (){
	for ( n = 0 ; n<5 ; n++)  // Loop only runs from 0 to 4
	{
		result += score[n];
	}
	
	cout << result ;
	return 0;
}
