/*
    Probelm :  Majority Element
    Author  : Bhishm Daslaniya
    "Make it work, make it right, make it fast." 
                                                – Kent Beck  
*/
class Solution {
public:
    int majorityElement(vector<int>& v) {
        int m = floor((double)v.size()/2);        
        set<int> s(v.begin(), v.end()); 
        int ans;
        for(int x:s){
            int freq = count(v.begin(),v.end(),x);
            if(freq > m){
                ans = x;
                break;
            }
        }
        return ans;
    }
};