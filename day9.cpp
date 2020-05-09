/*
    Probelm : Valid Perfect Square
    Author  : Bhishm Daslaniya
    "Make it work, make it right, make it fast." 
                                                – Kent Beck  
*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        int s = sqrt(num);
        if(s*s == num){
            return true;
        }
        return false;
    }
};


/// Alternative Solution without using inbuit sqrt
class Solution {
public:
    int CustomSqrt(int x) {
        if(x<0) return -1;
        double n=x;
        while(abs(n*n-x)>0.0001){
            n=(n+x/n)/2;
        }
        return (int)n;
    }
    bool isPerfectSquare(int num) {
        int a = CustomSqrt(num);
        if(a*a == num){
            return true;
        }
        return false;
    }
};