#include <iostream>
using namespace std;

typedef struct {
    float price;
    float weight;
} fruits;

fruits mango, apple, orange;
float sum=0;
float totalweight=0;
int no;

int main() {
    mango.price=16.40;
    orange.price=30.50;
    apple.price=10.20;
    mango.weight=1.6;
    apple.weight=1.2;
    orange.weight=3.5;

    cout<<"How many mangoes do you want - ";
    cin>>no; 
    sum=sum+no*mango.price; 
	totalweight = totalweight + no*mango.weight; 

	cout<<"How many apples do you want - "; 
	cin>>no; 
	sum=sum+no*apple.price; 
	totalweight = totalweight + no*apple.weight; 

	cout<<"How many oranges do you want - "; 
	cin>>no; 
	sum=sum+no*orange.price; 
	totalweight = totalweight + no*orange.weight;

	cout<<"The total cost is = "<<sum<<endl<<"Total weight is ="<<totalweight;

	return 0;}
