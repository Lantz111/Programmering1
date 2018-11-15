#include <iostream>
using namespace std;
int main () {
	
	double pris = 9.90, antal, rea;
    cout << "Hur många skivor vill du köpa?: ";
    cin >> antal;
    
    if (antal < 10){
	rea = pris * antal;
	 cout << "Du ska betala " << rea << "kr";
	 
}	
	
	else if (antal < 50){
		rea = pris * antal * 0.95;
		cout << "Du ska betala " << rea << "kr";
		
}
		
	else if (antal < 100){
		rea = pris * antal * 0.90;
		cout << "Du ska betala " << rea << "kr";
		
}			
    
    else {
		rea = pris * antal * 0.85;
		cout << "Du ska betala " << rea << "kr";
}		
		
	
	
	return 0;
}
