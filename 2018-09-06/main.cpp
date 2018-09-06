#include <iostream>
using namespace std;
int main()
{
     // en variabel för heltal
   int tal1;
     // variabeln tilldelades ett värde
   tal1 = 8;
   cout << tal1 << endl;
     // Flyttal, decimaltal
     // OBS! skrivs med decimalpunkt  .
   tal1 = 4.9;
   cout << tal1 << endl;
   float f1;
   f1 = 4.9;
   cout << f1 << endl;
   f1 = (f1 * 3);
   cout << f1 << endl;
   // inmatning i programmet
   int heltal1;
   cin >> heltal1;
   cout << heltal1 << endl;
   
   int tal4, tal2, tal3, tal14;
   cout << "Mata in 3 tal";
   cin >> tal4;
   cin >> tal2;
   cin >> tal3;
   tal14=tal1+tal2+tal3;
   cout << "Summa" << tal14;
   
   return 0;		
}
