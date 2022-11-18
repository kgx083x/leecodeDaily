/*
 * @lc app=leetcode.cn id=1684 lang=cpp
 *
 * [1684] 统计一致字符串的数目
 */

//用简单的 数组来代替 哈希表，然后暴力求解

// @lc code=start
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        //创建一个 26位的数组 来替代 哈希表
        int dp[26] ;
        //初始化 数组 , 将 dp 赋值为 0
        memset(dp,0,104) ;
        //将allowed内的元素在数组中赋值为1
        for(int i = 0 ; i < allowed.size() ; i++) {
            //allowed中的数值不重复
            dp[allowed[i]-'a']++ ;
        }
        int sum = 0 ;
        //遍历其他数组
        for(int i = 0 ; i < words.size() ; i++) {
            int flag = 1;
            for(int j = 0 ; j < words[i].size() ; j++) {
                //如果这个值不属于 allowd 就break
                if(!dp[words[i][j]-'a']) {flag = 0;break;}
            }
            if(flag) {sum++;}
        }
        return sum ;
    }
};
// @lccode=end
// !past
