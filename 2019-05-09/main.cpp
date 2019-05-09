#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;
void farenheit();
void celcius();
void meny();
int main (){
	meny ();
}
void meny(){
	int val;
	cout << "MENY" << endl; 
      cout << "Vill du omvandla Fahrenheit till Celsius, Tryck 1" << endl;
      cout << "Vill du omvandla Celsius till Fahrenheit, Tryck 2" << endl;
      cout << "Vill du avsluta? Tryck 3" << endl;
      cin >> val;
      
      if (val == 1){
		  farenheit();
	  }
	  else if (val == 2){
		  celcius();
	  }
	  else if (val == 3){
	  } }
void farenheit(){
	double farenheit;
	double celcius;
	cout << "Hur många grader Fahrenheit har du?: ";
	cin >> farenheit;
	celcius = (farenheit - 32) / 1.8; 
	cout << celcius << " grader Celsius" << endl << endl;
	meny();
}
void celcius(){
	double celcius;
	double farenheit;
	cout << "Hur många grader Celsius har du?: ";
	cin >> celcius;
	farenheit = celcius * 1.8 + 32;
	cout << farenheit << " grader Fahrenheit" << endl << endl;
	meny();
}
