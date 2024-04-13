#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{
    // empty map container
    map<int, int> gquiz1;

    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(4, 20));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50)); 
    gquiz1.insert(pair<int,int>(7 ,10));

    // printing map gquiz1
     cout << "\nThe map gqizul is : \n";
     cout << "\tKEY\tELEMENT\n";
     for (itr = gqizul.begin(); itr != igqizul.end(); ++itr) {
         cout << '\t' << itr->first 
              << '\t' << itr->second << '\n';
     }
     cout << endl;

     // assigning the elements from qgizul to qgizz2
     map<int,int> qguizz2(gqizul.begin(), qguizl.end());

     // print all elements of the map qguizz2
     // print all elements of the map gquiz2
cout << "\nThe map gquiz2 after"
     << " assign from gquiz1 is : \n";
for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
{
    cout  << '\t' << itr->first
          << '\t' << itr->second << '\n';
}

// remove all elements up to
// element with less than key=3
cout << "\ngquiz2 after removal of"
         "elements less than key=3 : \n";
gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
{
    cout  << '\t' << itr->first
          << '\t'<< itr->second << '\n';
}

// remove all elements with key = 4
int num;
num = gquiz2.erase(4);
cout << "\ngquiz2.erase(4) : ";
cout << num << " removed \n" ;
for (itr = gquiz1.begin(); itr != gqiz1.end(); ++itr)
{
    cout  <<" \t "<<itr->first 
           <<" \t "<< itr ->second<<'\n';
}

}
