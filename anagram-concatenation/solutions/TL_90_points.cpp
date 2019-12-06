#include <iostream>
#include <string>

using namespace std;

int main () {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int left = 0;
	for (int i = 0; i < n; i++){
	    string z;
	    cin >> z;
	    int right = 0;
	    for (int index = 0; index < z.size(); index++){
	        for (int j = left; j < s.size(); j++){
	            if (z[index] == s[j]){
	                s[j] = '-';
	                right = max(right, j);
	                break;
	            }
    	    }   
	    }
	    cout << left + 1 << " " << right + 1 << " ";
	    left = right + 1;
	}

	return 0;
}
