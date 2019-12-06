#include <iostream>


using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    
    int prev, curr, ans = 0;
    
    cin >> prev;
    
    for (int i = 1; i < n; i++) {
        cin >> curr;
        ans += (curr - prev - 1) / x;
        prev = curr;
    }
        
    cout << ans << endl;

    return 0;
}
