class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;  // count of set bit
        while(n>0){  // iterate until all bits are traversed
            if((n&1)>0) // check the parity of first bit from right
                ++cnt;
            n=n>>1; //n=n/2, shift one bit to right
        }
        return cnt;
    }
};


/*These are Builtin functions of GCC compiler

__builtin_popcount(x): This function is used to count the number of one’s(set bits) in an integer.

__builtin_parity(x): This function is used to check the parity of a number. This function returns true(1) if the number has odd parity else it returns false(0) for even parity.

__builtin_clz(x): This function is used to count the leading zeros of the integer. Note: clz = count leading zero’s.

__builtin_ctz(x): This function is used to count the trailing zeros of the given integer. Note: ctz = count trailing zeros.
*/