#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char, int> freq1;
for (char c : s) {
    freq1[c]++;
}
    
     unordered_map<char, int> freq2;
for (char c : t) {
    freq2[c]++;
}
    
    return freq1==freq2;}
};
                 int main() {
    Solution sol;       
    string s = "anagram";
    string t = "nagaram";   
    cout << (sol.isAnagram(s, t) ? "true" : "false") << endl;
    return 0;
}   