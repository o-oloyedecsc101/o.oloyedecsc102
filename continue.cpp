#include <iostream>
using namespace std;
int main (){
	for (int n=10; n>0; n--) {
		if (n==7) continue ;
		cout << n << ",";
		
	}
	
	cout << "End of the loop\n";
	return 0; 
}