/*
    Probelm : Jewels and Stones
    Author  : Bhishm Daslaniya
    "Make it work, make it right, make it fast." 
                                                – Kent Beck  
*/


class Solution {
public:
    int numJewelsInStones(string J, string s) {
        int a[26] = {0};
        int A[26] = {0};
        for(int i = 0 ; i < s.length() ;i++){
            if(isupper(s[i])){
                A[s[i]-65]++;
            }else{
                a[s[i]-97]++;
            }
        }
        int _count = 0;
        for(int i = 0 ; i < J.length();i++){
            if(isupper(J[i])){
                _count+=A[J[i]-65];
            }else{
                _count+=a[J[i]-97];
            }
        }
        return _count;
    }
};