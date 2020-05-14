/*
    Probelm : Remove K Digits
    Author  : Bhishm Daslaniya
    "Make it work, make it right, make it fast." 
                                                – Kent Beck  
*/
class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k==0){
            return num;
        }
        if(num.length() <= k){
            string s = "0";
            return s;
        }
        vector<int> v;
        string result;
        
        for(int i  = 0; i < k ; i++){            
            int index = 0;
            while(index < num.length()-1 && num[index] <= num[index+1]){
                index++;
            }
            num.erase(num.begin() + (index));
        }
        while(num.length() > 1 && num[0]=='0'){
            num.erase(num.begin()+0);
        }
        if(num.length() == 0){
            return "0";
        }
        return num;
    }
};