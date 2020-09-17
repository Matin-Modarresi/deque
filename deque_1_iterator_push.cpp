#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int>d1;
	d1.assign(5,2);
	
	for(int i=0 ; i<d1.size() ; i++)
	  cout << d1[i] << " ";
	  
	  cout << "\n";
	  
	deque<int>d2{1,2,3,4,5};
   
    d2.push_back(6);
	d2.push_front(0);
	
	deque<int>::iterator itr;
	
	for( itr = d2.begin() ; itr!=d2.end() ; itr++)
	  cout << *itr << " ";	
}
