// solution: 4613732

#include <iostream>
using namespace std;

const long valMax = 4000000;

long fib(long n);

int main() {
  long fibSum = 0;
  
  long currentNum = 1;
  long currentVal = fib(currentNum);
  
  while (currentVal < valMax) {
    if (currentVal % 2 == 0) {
      fibSum += currentVal;
    }
    currentNum++;
    currentVal = fib(currentNum);
  }
  
  cout << fibSum << endl;
  
  return 0;
}

// iterative function - doesn't work
long fib(long n) {
  long val1 = 1, val2 = 1,temp;
  if (n == 1 || n == 2) {
    return 1;
  }
  for (int i = 3; i <= n; i++) {
    temp = val1;
    val1 = val2;
    val2 += temp;
  }
  return val2;
}

/* recursive function
long fib(long n) {
  if ((n == 1) || (n == 2)) {
    return 1;
  } else {
    return (fib(n-1) + fib(n-2));
  }
}*/