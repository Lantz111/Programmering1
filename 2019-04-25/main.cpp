#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;
/*8.3
void tal();
int main ()
{
	tal();
	
      return 0;
}

void tal(){
	
	int n = 3;
	
	do {
	cout << n << endl;
	n++;
       } while (n<11);
       
       
	
	return;
}
*/




//8.3
void nignog();
int main(){
	nignog();
}

void nignog(){
	
	int rows, collums;
	cout << "How many rows u want mon?: ";
	cin >> rows;
	cout << "How many collums u want mon?: ";
	cin >> collums;
	
	for (int n=0; n<collums; n++)
	{
		for (int n=0; n<rows; n++)
		cout << "*"; 
		
		cout << endl;
	}
} 
	








