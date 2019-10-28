#include <iostream>
using namespace std;
const int rangeMax = 1000;

int main() {
  int multipleSum = 0;
  
  for (int i = 1; i < rangeMax; i++) {
    if ((i % 3 == 0) || (i % 5 == 0)) {
      multipleSum += i;
    }
  }
  
  cout << multipleSum;
}