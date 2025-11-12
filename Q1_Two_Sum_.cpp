// Brute force approach ; Complexity - O(n^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for ( int i = 0 ; i < nums.size() ; i ++ ){
            for ( int j = i+1 ; j < nums.size() ; j ++ ){
                int curr_Sum = nums[i] + nums[j] ;
                if (target == curr_Sum){
                       return {i,j};
                }
                curr_Sum = 0;
            }
        }   
         return {-1,-1};
    }
  };
