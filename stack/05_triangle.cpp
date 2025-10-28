class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0], b = nums[1], c = nums[2];

        // Check validity of triangle
        if (a + b <= c || a + c <= b || b + c <= a)
            return "not a triangle";

        // Check triangle types
        if (a == b && b == c)
            return "equilateral";
        else if (a == b || b == c || a == c)
            return "isosceles";
        else
        
        return "scalene";
    }
};
