/*
 * @lc app=leetcode.cn id=1732 lang=cpp
 *
 * [1732] 找到最高海拔
 */

// @lc code=start
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0 , max1 = 0 ;
        for(int i =0 ; i < gain.size() ; i++) {
            sum += gain[i] ;
            max1 = max(max1,sum) ;
        }
        return max1;
    }
};
// @lc code=end

