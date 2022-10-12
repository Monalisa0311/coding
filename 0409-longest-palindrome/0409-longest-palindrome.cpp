class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        int count=0;
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(s[i])!=mp.end())
                mp[s[i]]++;
            else
                mp[s[i]]=1;
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>1 && it->second%2==0)
                count+=it->second;
            else if(it->second>1)
                count+=(it->second-1);
        }
        if(count!=n && count%2==0)
            count++;
        return count;
    }
};