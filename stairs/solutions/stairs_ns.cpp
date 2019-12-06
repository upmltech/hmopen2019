#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int ans = 0;
    
    for (int i = 0; i < n - 1; i++) {
        ans += (a[i + 1] - a[i] - 1) / x;
    }
    
    cout << ans << endl;

    return 0;
}
