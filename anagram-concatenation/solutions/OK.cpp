#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector <int> alphabet(26);
	int left = 0;
	for (int i = 0; i < n; i++){
	    string z;
	    cin >> z;
	    int count = 0;
	    for (int j = 0; j < z.size(); j++){
	        alphabet[int(z[j]) - 'a']++;
	        count++;
	    }
	    int right = left;
	    
	    while (count > 0) {
	        if (alphabet[int(s[right]) - 'a']){
	            alphabet[int(s[right]) - 'a']--;
	            count--;
	        }
	        right++;
	    }
	    cout << left + 1 << " " << right << endl;
	    left = right;
	}

	return 0;
}
