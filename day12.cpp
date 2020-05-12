/*
    Probelm : Single Element in a Sorted Array
    Author  : Bhishm Daslaniya
    "Make it work, make it right, make it fast." 
                                                – Kent Beck  
*/


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {        
        int x = nums[0];
        for(int i = 1;i < nums.size() ; i++){
            x = x^nums[i];
        }
        return x;
    }
};