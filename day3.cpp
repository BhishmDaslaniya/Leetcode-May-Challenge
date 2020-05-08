/*
    Probelm : Ransom Note
    Author  : Bhishm Daslaniya
    "Make it work, make it right, make it fast." 
                                                – Kent Beck  
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a[26] = {0};
        for(int i = 0 ; i < magazine.length() ; i++){
            a[magazine[i]-97]++;
        }
        for(int i = 0 ;  i < ransomNote.length();i++){
            if(a[ransomNote[i]-97]){
                a[ransomNote[i]-97]--;
            }else{
                return false;
            }
        }
        return true;
    }
};