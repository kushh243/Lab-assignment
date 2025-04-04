#include <iostream>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};
        int n = s.size();

        for(int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }

        for(int i = 0; i < n; i++) {
            if(freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int index = sol.firstUniqChar(s);
    if (index == -1)
        cout << "No unique character found." << endl;
    else
        cout << "The first unique character is at index: " << index << endl;
    return 0;
}
