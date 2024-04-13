#include <iostream>
using namespace std;
int main(){
	int var =789;
	int *ptr2;
	int **ptr1;
	ptr2 = &var;
	ptr1 = &ptr2;
	cout << "value of var = "<< var<<endl;
	cout << "Content value of single pointer ptr2 ="<< *ptr2 <<endl;
	cout << "Adress value of single pointer ptr2 =" << ptr2 <<endl;
	cout << "content value of double pointer ptr1 =  =" << **ptr1 <<endl;
	cout << "Adress value of double of pointer ptr1 = "<< ptr1 <<endl;
	
	return 0; 
}
