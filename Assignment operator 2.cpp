#include <iostream>
using namespace std;
main()
{
    int a = 21;
    int b = 3;
    int c;

    c = a + b;
    cout << "a + b, Value of c = : " << c << endl;
    c += a;
    cout << "+= a, Value of c = : " << c << endl;
    c -= a;
    cout << "-= a, Value of c = : " << c << endl;
    c *= a;
    cout << "*= a, Value of c = : " << c << endl;
    c /= a; 
    cout << "/= a, Value of c = : " <<c<<endl;

  	c=200; 
	cout<<"when C=200,c%=a,Value of C=: "<<c<<endl; 

	cout<<"C<=2j,valueofC=: "<<c<<endl; 
	c>>=2; 
	cout<<"C>>2,valueofC=: "<<c<<endl; 
	c&=2; 
	cout<<"C&2,valueofC=: "<<c<<endl; 
	c^=2; 
	cout<<"C^2,valueofC=: "<<c<<endl; 

 

	return 0 ;
}
