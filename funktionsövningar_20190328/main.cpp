#include <iostream>
using namespace std;
void multiplikation (double falt[], int antal);
int main(){
	
	double falt[] = {-4, -4.5, 6, 0};
	int antal = 0;
	for (int i = 0; i < 4; i++){
		
		cout << falt[i] << endl;
		antal = i - 1;
	}
	
multiplikation(falt, antal);

    for (int i = 0; i < 4; i++){
		
	     	cout << falt[i] << endl;
	   }
	    
	
	
	
	
	
return 0; 	
}

void multiplikation (double falt[], int antal){
	
	for (int i = 0; i < 4; i++){
		
	     falt[i] = falt [i] * -1;
		
	}
}
