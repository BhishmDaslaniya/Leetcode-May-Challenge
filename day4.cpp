/*
    Probelm : Number Complement
    Author  : Bhishm Daslaniya
    "Make it work, make it right, make it fast." 
                                                – Kent Beck  
*/

class Solution {
public:
    int findComplement(int num) {
        if(num==0) return 1;
        int p=log2(num);
        p=pow(2,p+1)-1;
        return num^p;
    }
};

// Alternative solution
// class Solution {
// public:
//     int findComplement(int num) {
//         long n=32-__builtin_clz(num);
//         return (int)(num^((1L<<n)-1L));
//     }
// };