// doesn't work :(

#include <iostream>
#include <vector>
using namespace std;

const long long numToTest = 600851475143;

int main() {
  vector<long long> primes {1, 2, 3};
  
  for (long long i = 5; i <= numToTest; i+= 2) {
    bool add = true;
    
    for (int j = 0; j < primes.size(); j++) {
      if (i % primes[j] == 0) {
        add = false;
        break;
      }
    }
    if (add) {
      primes.push_back(i);
    }
  }
  
  for (int i = primes.size() - 1; i >= 0; i--) {
    if (numToTest % primes[i] == 0) {
      return primes[i];
    }
  }
  
  return 0;
}