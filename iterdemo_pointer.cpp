//this program demoed the pointer can be one kind of iterator::

#include <iostream>
#include <algorithm>
 
using namespace std;
 
#define SIZE 100
int iarray[SIZE];
 
int main()
{
  int iarray[20] = {50,10,1,5,20};
  int* ip = find(iarray, iarray + SIZE, 50);
  if (ip == iarray + SIZE)
    cout << "50 not found in array" << endl;
  else
    cout << *ip << " found in array" << endl;
  return 0;
}
