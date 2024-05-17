#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "Hello world!" << endl;
  cout << sqrt(7) << endl;

  /* 
    *
    * *
    * * *
    * * * *

    1
    2 3 
    4 5 6
    7 8 9
   */

    int number = 0;
   for( int i = 0; i < 4 ; i++) {

      for(int j = 0; j < i + 1; j++) {
        cout << number + 1 << " ";
        number++;
      }

      cout << endl;

   }
  return 0;
}