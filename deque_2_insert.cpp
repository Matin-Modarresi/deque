#include <iostream>
#include <deque>

using namespace std;


int main()
{
    deque<int>d1;
	d1.assign(5,2);
	
   for(int i=0 ; i<d1.size() ; i++)
	  cout << d1[i] << " "; // 2 2 2 2 2
	  
	  cout << "\n";
	  
	deque<int>d2{1,2,3,4,5};
	
	deque<int>::iterator itr;
	
	for( itr = d2.begin() ; itr!=d2.end() ; itr++)
	  cout << *itr << " ";	// 1 2 3 4 5
	  
	  cout << endl;
	  
	  d1.insert(d1.begin() , d2.begin() , d2.end());
	  
	  	for( itr = d1.begin() ; itr!=d1.end() ; itr++)
	       cout << *itr << " ";	// 1 2 3 4 5 2 2 2 2 2
	  
	  cout << endl;
	  
	  d1.resize(2);
	  for(int i=0 ; i<d1.size() ; i++)
	    cout << d1[i] << " ";
	    
	    cout << "\n";
	   
	  d1.resize(8,9);
	  
	  d1.pop_front();
	  d1.pop_front();
	  
	  for(int i=0 ; i<d1.size() ; i++)
	    cout << d1[i] << " ";  // 9 9 9 9 9 9
	   
	 cout << endl; 
	    
	deque<string>d3;
	
	d3.assign(2,"ali");      // ali ali
	d3.push_front("matin"); // matin ali ali
	
	deque<string>::iterator sitr;
	
	for(sitr = d3.begin() ; sitr!= d3.end() ; sitr++)
	 *sitr = "Hello " + *sitr;
	 
	for(sitr = d3.begin() ; sitr!= d3.end() ; sitr++)
	 cout << *sitr << "     "; // Hello matin    Hello ali     Hello ali
}
