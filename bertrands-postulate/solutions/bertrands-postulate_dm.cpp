#include <iostream>

using namespace std;

int main () {
	long long n;
	cin >> n;
	if (n == 1){
		cout << "NO";
		return 0;
	}
	cout << "YES" << endl;
	for (long long i = n + 1; i < 2 * n; i++){
		bool flag = true;
		for (long long j = 2; j * j <= n; j++){
			if (i % j == 0){
				flag = false;
				break;
			}
		}
		if (flag){
			cout << i;
			return 0;
		}
	}

	return 0;
}
