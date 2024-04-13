#include <iostream>
using namespace std;

enum week {Sunday=0, Monday, Tuesday, wednesday, thursday, friday, Saturday };

int main()
{
	week today;
	today = Tuesday;
	cout << "Day " << today+1;
	return 0;
}
