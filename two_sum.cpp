#include <iostream>
#include <vector>

using namespace std;

class Solution { 
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j;
        int n = nums.size();
        vector<int> num(2);

        for(i = 0; i < n; i++) {
            for(j = i + 1; j < n; j++) {
                if(target == nums[i] + nums[j]) {
                    num[0] = i;
                    num[1] = j;
                    return num;
                }
            }
        }
        return num;
    }
};

int main() {
    Solution sol;
    int n, target;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    vector<int> result = sol.twoSum(nums, target);
    
    cout << "Indices: " << result[0] << ", " << result[1] << endl;

    return 0;
}
