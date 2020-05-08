/*
    Probelm : First Unique Character in a String
    Author  : Bhishm Daslaniya
    "Make it work, make it right, make it fast." 
                                                – Kent Beck  
*/
class Solution {
public:
    int firstUniqChar(string s) {
        int a[26] = {0};
        for(int i = 0 ; i < s.length() ; i++){
            a[s[i]-97]++;
        }
        for(int i = 0 ; i < s.length() ; i++){
            if(a[s[i]-97] == 1){
                return i;
            }
        }
        return -1;
    }
};