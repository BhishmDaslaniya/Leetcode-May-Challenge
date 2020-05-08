/*
    Probelm : Check If It Is a Straight Line
    Author  : Bhishm Daslaniya
    "Make it work, make it right, make it fast." 
                                                – Kent Beck  
*/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        for(int i = 2; i < coordinates.size()-1 ; i++){
            if ((coordinates[1][0] - coordinates[0][0]) * (coordinates[i + 1][1] - coordinates[i][1])
                    != (coordinates[1][1] - coordinates[0][1]) * (coordinates[i + 1][0] - coordinates[i][0])) {
                    return false;
            }
        }
        return true;
    }
};