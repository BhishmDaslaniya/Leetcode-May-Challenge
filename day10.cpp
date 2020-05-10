/*
    Probelm : Find the Town Judge
    Author  : Bhishm Daslaniya
    "Make it work, make it right, make it fast." 
                                                – Kent Beck  
*/

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int count_lookup[1005] = {0};
        int check_trust[1005] = {0};
        for(int i = 0 ; i < trust.size() ; i++){
            check_trust[trust[i][0]] = 1;
            count_lookup[trust[i][1]]++;
        }
        for(int i = 1 ; i <= n ; i++){
            if(count_lookup[i] == n-1 && check_trust[i] == 0){
                return i;
            }
        }
        return -1;
    }
};