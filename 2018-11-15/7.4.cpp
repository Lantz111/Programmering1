#include <iostream>
using namespace std;
int main () {
	
	int alder;
	
    cout << "Mata in din ålder: ";
    
    cin	>> alder;
    
    if (alder < 15 || alder > 65) {
		cout << "Betala 5kr" << endl;
	}
	
	else 
	    
	    cout << "Betala 10kr" << endl;
	
	

	return 0;
}
