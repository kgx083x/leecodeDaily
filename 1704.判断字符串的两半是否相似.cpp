/*
 * @lc app=leetcode.cn id=1704 lang=cpp
 *
 * [1704] 判断字符串的两半是否相似
 */

// @lc code=start
class Solution {
public:
    bool halvesAreAlike(string s) {
        //初始化 两个字符串
        string front(s,0,s.size()/2) ; // [0,2)
        string last(s,s.size()/2,s.size()) ; //[2,4]
        //用 set 容器来存储 元音字符
        set<char> hash = {'a','A','e','E','i','I','o','O','u','U'} ;
        int num1 = 0 ,num2 = 0;
        //front 和 last 的长度相同
        for(int i = 0 ; i < front.size() ; i++) {
            if(hash.count(front[i])) {
                num1++;
            }
            if(hash.count(last[i])) {
                num2++;
            }
        }
        return (num1 == num2);
    }
};
// @lc code=end

