/*
Dominic Stephens
#2338728
CPSC-01 298 C++
January 15, 2021
*/

#include <iostream>
using namespace std;

float* readInt(){
  float feet;
  float inches;
  float* imperialLength = new float[2];

  cout << "provide length in feet";

  cin >> feet;

  cout << "provide inches";

  cin >> inches;

  imperialLength [0] = feet;
  imperialLength [1] = inches;

  return imperialLength;

}

float* converter(float imperialLength[]){
  imperialLength [0] = (imperialLength[0] * .3048);
  imperialLength [1] = (imperialLength[1] * 2.54);

  return imperialLength;
}

void output(float metricLength[]){
  float totalMeters = metricLength [0] + (metricLength[1] / 100);
  cout << totalMeters << " total meters";
}


int main(){
  float* metricLength;

  metricLength = readInt();
  metricLength = converter(metricLength);
  output(metricLength);

  return 0;
}
