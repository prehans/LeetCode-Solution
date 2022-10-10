class Solution {
public:
    bool canMeasureWater(int jug1, int jug2, int target) {
        return target <= jug1+jug2 and target%gcd(jug1,jug2) == 0;
    }
    int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);   
    }
};