#include <iostream>
#include <vector>
#include <iterator>
using namespace std;


int main()
{
	
vector<int>  v{1,2,3,4,5};
vector<int> :: iterator i;


for (i = v.begin(); i != v.end(); i++)
{
	*i =  *i  *5;
}

}

zout << "Output of begin amd end: ";
  for (i = v.begin();  i  != v.end(); ++i)
    cout << *i << *  *;