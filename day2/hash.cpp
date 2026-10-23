
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int x: nums){
            if(set.count(x)){
                return true;
            }
            set.insert(x);
        }
        return false;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};
    cout << (sol.hasDuplicate(nums) ? "true" : "false") << endl;
    return 0;
}