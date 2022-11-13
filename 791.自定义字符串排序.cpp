/*
 * @lc app=leetcode.cn id=791 lang=cpp
 *
 * [791] 自定义字符串排序
 */

// @lc code=start
class Solution {
public:
    string customSortString(string order, string s) {
        //解法 1 ：自定义排序
        // vector<int> val(26);
        // for (int i = 0; i < order.size(); ++i) {
        //     val[order[i] - 'a'] = i + 1;
        // }
        // sort(s.begin(), s.end(), [&](char c0, char c1) {
        //     return val[c0 - 'a'] < val[c1 - 'a'];
        // });
        // return s;


        //解法二
        //初始化一个 容器 ， 长度为26,默认值为0
        vector<int> dp(26) ;
        //往容器中依次存入s的值
        for(int i = 0 ; i < s.size() ; i++) {
            dp[s[i]-'a']++;
        } 
        //根据order中的元素 出现的顺序先构造字符串 rs ;
        string rs = "" ;
        for(int i = 0 ; i < order.size() ; i++) {
            while (dp[order[i]-'a']-- > 0) {rs += order[i];}
        }
        //其余的数据随便排序
        for(int i = 0 ; i < 26 ; i++) {
            while (dp[i]-- > 0) {rs += i+'a';}
        }
        return rs ;
    }
};
// @lc code=end

