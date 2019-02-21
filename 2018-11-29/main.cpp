#include <iostream>
using namespace std;
int main ()
{
	//8.1
	
	/*
	for(int n=3; n<=10; ++n)
	{
		cout << n << endl;
	}
	*/
	
	
	//8.2
	
	/*
	int n=3;
	
	while(n<=10)
	{
		cout << n << endl;
		++n; 
	}
	*/
	
	int r = 69;
	int s;
	int f=0;
	
	while (s < r || s > r)
	{
		cout << "gissa" << endl;
		cin >> s;
		
		if (s < r) {
			f++;
			cout << "för litet" << endl;
		}
		
		else if (s > r) {
			f++;
			cout << "för stort" << endl;
		}
		
		else if (s == r) {
			f++;
			cout << "Grattis " << f << " försök" << endl;
			
		}
	}
	
	
	
	
	
	
	
      return 0;
}
