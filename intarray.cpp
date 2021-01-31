/*
Dominic Stephens
#2338728
CPSC-01 298 C++
January 15, 2021
*/

#include <iostream>
using namespace std;

  int main(){

    int foo [10];
    int fooSum;
    int fooAvg;
    int x;
    int counter = 0;

    cout << "Provide up to 10 integers. When you are done, type -1" << endl;
    while (x >= 0 && counter < 10){
        cin >> x;
        if(x >= 0){
          foo[counter] = x;
          counter += 1;
      }
    }
      for (int i = 0; i < counter; i++){
        cout << foo[i];
      }

    return 0;
  }
