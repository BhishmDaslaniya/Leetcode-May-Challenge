/*
    Probelm : First Bad Version
    Author  : Bhishm Daslaniya
    "Make it work, make it right, make it fast." 
                                                – Kent Beck  
*/


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1,high = n;
        // int mid = n/2;
        int badindex = 0;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(isBadVersion(mid)){
                badindex = mid;
                high = mid - 1;
            }else{
                low = mid+1;
            }
        }
        return badindex;
    }
};