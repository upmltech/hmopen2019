#include <iostream>

using namespace std;

int main() {
  int n;
  long long fact = 1;
  cin >> n;
  int delta = 0;
  for (int i = 2; i <= n; i++){
    int k = i;
    while (k % 2 == 0){
      k/=2;
      delta++;
    }
   	while (k % 5 == 0){
      k/=5;
      delta--;
    }
    fact*= k;
    fact%=10;
  }
  for (int i = 0; i < delta; i++){
    fact *=2;
    fact%=10;
  }
  cout << fact;
  
  return 0;
}
