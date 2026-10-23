class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
          int right=numbers.size()-1;
        int left=0;
         while(left<right){
            int currentsum=numbers[left]+numbers[right];
            if(currentsum==target){
                return{left,right};
            }
            else if(currentsum<target){
                left++;
            }
            else{
            right++;
         }
    }
    return {right,left};
    }
};