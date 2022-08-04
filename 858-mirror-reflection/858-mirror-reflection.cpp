class Solution {
public:
    int mirrorReflection(int p, int q) {
    if (q == 0) return 0;
    
    int height = q;
    while (height < p || height % p) {
        height += q;
    }
        
    int upFlip = height / p;
    int rightFlip = height / q;
    int topCorner = upFlip % 2 ? 1 : 0;
    return rightFlip % 2 ? topCorner : 2;
        
    }
};